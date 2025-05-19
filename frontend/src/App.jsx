import {useEffect, useState} from 'react'

export default function App() {
	const [data, setData] = useState(null);

	useEffect(()=>{
		fetch("http://localhost:5000/api/quote")
		.then(res => res.json())
		.then(data => setData(data))
	}, [])

	if (!data) return <p> Loading.. </p>
	
	return (<>{data.quote}</>)
}
