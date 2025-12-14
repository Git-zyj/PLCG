/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6920
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
    var_18 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) var_7)))));
        var_19 |= ((/* implicit */int) ((long long int) max((var_8), (((/* implicit */unsigned long long int) var_7)))));
        var_20 = (+(((/* implicit */int) min(((unsigned char)85), (((/* implicit */unsigned char) (signed char)-121))))));
        var_21 = ((/* implicit */_Bool) (short)-8192);
        var_22 = min((((/* implicit */long long int) ((arr_1 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) var_5)))))), (arr_1 [i_0]));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-20))) > (3037412667555976178ULL))))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))) > (15409331406153575448ULL))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (-1203784765)))) : (((/* implicit */int) ((15409331406153575438ULL) == (3037412667555976186ULL))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_24 *= ((/* implicit */signed char) var_6);
                                var_25 |= ((/* implicit */int) ((((/* implicit */_Bool) -1203784765)) ? ((+(3037412667555976178ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32767), (((/* implicit */short) (unsigned char)70))))))));
                                arr_17 [i_1] [i_2] [i_2] [i_5] = ((/* implicit */unsigned char) (~(((((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_16)) + (67))))) ^ ((~(2147483647)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */int) (((~(((/* implicit */int) var_3)))) != (max(((~(((/* implicit */int) (unsigned char)192)))), (((/* implicit */int) ((short) 958699094691837636LL)))))));
    }
    var_27 = ((/* implicit */long long int) ((((((((/* implicit */long long int) 1166467899)) - (var_1))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) == (min((var_1), (((/* implicit */long long int) (-(-220704435))))))));
}
