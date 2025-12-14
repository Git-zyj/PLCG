/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82722
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_15))) & (max((((-9201149208845153777LL) | (9201149208845153776LL))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)1)) ^ (((/* implicit */int) (unsigned short)44622)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_20 *= ((/* implicit */short) ((max((((/* implicit */long long int) (unsigned char)0)), (-9201149208845153786LL))) >> ((((((~(((/* implicit */int) (signed char)127)))) ^ (min((72380885), (((/* implicit */int) (unsigned short)2880)))))) + (2940)))));
                                var_21 = ((/* implicit */_Bool) (-(-9201149208845153776LL)));
                                arr_11 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 9201149208845153786LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9794))) : (3176362565563238632LL))) | (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)104)) << (((((/* implicit */int) (short)32767)) - (32765)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)20913))) ^ (8956090528171370231LL))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)-104)) & (((/* implicit */int) (signed char)117)))))))));
                                var_22 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((-9201149208845153777LL), (((/* implicit */long long int) (signed char)127))))) & ((~(16703868587648741532ULL)))))) ? (((((/* implicit */_Bool) min((9201149208845153777LL), (9201149208845153777LL)))) ? (((/* implicit */unsigned long long int) 2361478675U)) : ((~(16703868587648741525ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)8))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)46)), (933938126U)))) ? (((/* implicit */unsigned long long int) ((629276528U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))) : (((18446744073709551615ULL) + (0ULL))))) + (min((4214473771465062303ULL), (((/* implicit */unsigned long long int) (short)-31329))))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) min((var_5), ((((+(((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) (short)31338)) + (((/* implicit */int) (unsigned short)17))))))));
}
