/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79241
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_2] [i_2 - 2] [i_0] = ((/* implicit */unsigned int) (unsigned short)65525);
                            var_16 &= ((/* implicit */int) (+(min((((/* implicit */unsigned int) arr_5 [i_2 + 1])), (max((arr_2 [i_1] [i_0]), (((/* implicit */unsigned int) var_11))))))));
                            arr_10 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_8 [i_3] [i_0] [i_0] [i_0])) ? (var_14) : (((/* implicit */int) arr_5 [i_0])))))) : (min((arr_7 [(signed char)6] [i_0] [i_0] [i_2 - 3]), (arr_7 [i_2] [i_0] [i_0] [i_2 - 3])))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) (((-(((int) arr_1 [0U])))) << ((((((~(arr_8 [i_0] [i_0] [i_0] [i_0]))) + (1539525728))) - (7)))))) : (((/* implicit */unsigned long long int) (((-(((int) arr_1 [0U])))) << ((((((((((~(arr_8 [i_0] [i_0] [i_0] [i_0]))) + (1539525728))) - (7))) + (152852441))) - (21))))));
                arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(142302807)))) ? (arr_0 [i_0] [i_1]) : (((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1])))));
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        {
                            arr_19 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7779)) ? (((/* implicit */int) (_Bool)0)) : (arr_8 [i_0] [i_0] [i_4] [i_5 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */long long int) 1865678719))))) : (((((/* implicit */unsigned long long int) arr_2 [i_1] [i_0])) % (arr_7 [i_0] [i_5 + 3] [i_0] [8U])))))));
                            arr_20 [(unsigned short)6] [(unsigned short)6] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)5082)))))))), (((unsigned long long int) (_Bool)1))));
                            arr_21 [i_5] [i_0] [8U] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                            var_17 = ((/* implicit */unsigned short) ((unsigned int) ((int) min((arr_8 [(unsigned char)7] [i_0] [(short)9] [i_5]), (-133395723)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (5918407357763844299LL)))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) var_6)))))));
}
