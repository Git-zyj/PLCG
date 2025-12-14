/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73257
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0] [(_Bool)1])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 17; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 1) 
                        {
                            var_14 *= ((/* implicit */unsigned short) (_Bool)1);
                            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)11] [(short)11] [i_3 + 2])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))) : (((unsigned int) var_2))));
                            var_16 = ((/* implicit */signed char) ((arr_8 [i_1] [i_2 - 2] [12] [i_0]) ? (((/* implicit */int) arr_13 [i_4 + 1] [i_1] [i_2 - 1] [i_3 - 2] [i_4])) : (((/* implicit */int) (unsigned char)250))));
                            var_17 |= ((/* implicit */short) var_0);
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (0) : (((/* implicit */int) (short)(-32767 - 1)))));
                        }
                        var_19 *= ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        var_20 = ((/* implicit */unsigned long long int) arr_8 [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_0]);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 2; i_5 < 19; i_5 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (_Bool)1)))) & (-23)));
                            var_22 = ((signed char) ((int) -1));
                            var_23 &= ((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5 + 1]))) : (-3756162961833164915LL))) >> (((((/* implicit */int) var_0)) + (57))));
                        }
                    }
                } 
            } 
        } 
    }
    var_24 = (((+(max((((/* implicit */long long int) var_4)), (var_11))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((1826600170608254620LL) > (((/* implicit */long long int) var_2)))))))));
    var_25 = ((/* implicit */short) max((((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 11U)) || (((/* implicit */_Bool) (unsigned char)158))))))))));
    var_26 &= (_Bool)1;
}
