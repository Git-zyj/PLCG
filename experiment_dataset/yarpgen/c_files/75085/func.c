/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75085
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
    var_14 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-116))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_12))))) == (((/* implicit */int) var_6)))))) < ((~(((((/* implicit */unsigned int) -345773425)) / (var_7)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                            arr_12 [i_0] [i_0] = ((/* implicit */signed char) (!(((((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [12])) >= (((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))));
                            arr_13 [i_3] [8LL] [i_1] [(signed char)11] = ((/* implicit */short) var_10);
                            var_16 = ((/* implicit */long long int) max((-345773425), ((~(((/* implicit */int) var_6))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        {
                            arr_19 [i_0] [(unsigned char)4] [i_4] [12] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)2)) ? (((/* implicit */int) (signed char)-39)) : (-345773420)))))) ? ((~(arr_6 [i_0 - 1] [i_0 - 1] [i_0]))) : (((((/* implicit */int) (!(arr_17 [i_0])))) << (((/* implicit */int) ((var_11) && (((/* implicit */_Bool) var_8)))))))));
                            var_17 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (7051495090894175775LL)))) ? ((-(((/* implicit */int) var_3)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0 - 1])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            {
                                var_18 = (-(var_8));
                                var_19 = ((/* implicit */long long int) (unsigned char)119);
                                var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_0] [i_1] [i_7] [i_8]))))) : ((~(arr_26 [i_1 - 3] [i_1 - 2] [7LL] [(signed char)1] [i_1] [i_1])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
