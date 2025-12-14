/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55461
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
    var_11 = ((/* implicit */unsigned int) 989109273);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_12 *= ((/* implicit */_Bool) (-(arr_2 [i_0])));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            var_13 = ((/* implicit */signed char) arr_8 [i_4] [20LL]);
                            var_14 = ((/* implicit */unsigned int) (signed char)33);
                        }
                        for (int i_5 = 1; i_5 < 22; i_5 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_5 + 2])) || (((/* implicit */_Bool) arr_2 [i_5 - 1]))));
                            arr_17 [i_5 + 2] [i_5 + 2] [i_3] [i_2] [i_3] [i_1] [(unsigned char)18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(868080217))))));
                        }
                        for (unsigned char i_6 = 1; i_6 < 23; i_6 += 2) 
                        {
                            var_16 = (~(((/* implicit */int) (short)13174)));
                            var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)-13175)) : (512306268)));
                        }
                        for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 1) 
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-((~(765125551U))))))));
                            var_19 = ((((/* implicit */int) arr_14 [i_2] [i_2] [(_Bool)1] [i_7 + 1] [(_Bool)1])) / (((/* implicit */int) arr_14 [i_2] [i_7 + 2] [21] [i_7 + 1] [i_7])));
                            var_20 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (arr_2 [i_7])))) ? ((+(15738381887341708807ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_0] [5] [i_2])) : (989109277))))));
                            var_21 = ((/* implicit */signed char) (~(-7674170512003251167LL)));
                            var_22 = ((/* implicit */short) -989109274);
                        }
                        var_23 *= ((/* implicit */signed char) (-(((/* implicit */int) (short)-11083))));
                    }
                    for (int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned char) var_7);
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_20 [i_8] [i_1] [i_8])) ? (((/* implicit */int) (_Bool)0)) : (-1095893824)))))) : (((((((/* implicit */_Bool) 2356500559143264750LL)) ? (1738142295131207989LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46667))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))))));
                    }
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 765125551U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)90))));
                    var_27 = ((/* implicit */unsigned int) min((min(((~(((/* implicit */int) var_3)))), (((var_2) & (((/* implicit */int) (signed char)-117)))))), (((/* implicit */int) var_0))));
                }
            } 
        } 
    } 
}
