# Run using docker
`docker run -e prefix="usd_" -e account="genesis account" -e work="genesis work" -e signature="genesis signature" -e name="network name" -e peering="peering hostname" -e peering_port=7090 -e source="genesis source" -e RPC_PORT="rpc port" -e WS_PORT="websocket port" -v /root/nodes:/root -it -d --restart unless-stopped yxse/nan`

# Examples
## NANUSD
`docker run -p 0.0.0.0:7090:7090 -p 9999:9999 -p 0.0.0.0:9998:9998 -e prefix="usd_" -e account="usd_1gzne9cau473gmnx3meopyi1trxiw4cu54bzkrm1p6khhpfinwj55k9d4eeq" -e work="d7c883b7a44262eb" -e signature="4BF5D5C7F541C5BBFCBADD394658217E94F05151268BD4DBC064CB3E27768B472D378C3813DB00F3195794F370F48F61BB974B3E40193BC8EA0CE7FA0BC67201" -e name="NanUSD" -e peering="peering.nanusd.com" -e peering_port=7090 -e source="3BF461D48D88A174E9D0CD95B7A00D63B0E095B1893F96260B124F7D9B0A7223" -e RPC_PORT="9999" -e WS_PORT="9998" -v /root/nodes/nanusd:/root -it -d --restart unless-stopped yxse/nan`
