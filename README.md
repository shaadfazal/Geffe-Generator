# Geffe-Generator
Geffe key stream generator uses three LFSRs,combined in a non linear manner.
Two of the LFsrs are inputs into a multiplexer and the third LFSR controls the ouput of the multiplexer.
Alternating Stop-and-Go Generator
This generator uses three LFSRs of different length. LFSR-2 is clocked when the output of LFSR-1 is 1; LFSR-3 is clocked when the output of LFSR-1 is 0. The output of the generator is the XOR of LFSR-2 and LFSR-3 
