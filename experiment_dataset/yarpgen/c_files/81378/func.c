/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81378
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_13))));
    var_19 = ((/* implicit */int) var_15);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [4] [5] [5] [5] = ((/* implicit */signed char) max(((-(((/* implicit */int) arr_0 [i_1 - 1] [i_1])))), (min((min((-43812437), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_12 [i_4] [i_0] [(short)13] [i_1] [i_0]))));
                                arr_13 [i_4] [i_3 + 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((int) arr_1 [i_0]));
                                var_21 &= min((((/* implicit */int) ((short) -1212507922))), ((+(arr_7 [i_3 - 3] [i_1 + 1] [(short)0]))));
                                arr_14 [i_0] [i_0] [i_2] [9] [i_0] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (max((((/* implicit */unsigned long long int) var_12)), (arr_10 [i_1] [i_1] [i_3] [i_1]))))));
                                arr_15 [i_1] [i_4] = ((/* implicit */short) arr_10 [i_1 + 1] [18] [i_1] [i_1 - 1]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 4) 
                    {
                        for (short i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (((+(((((/* implicit */unsigned long long int) var_6)) - (var_16))))) - ((+(max((16974852329997721751ULL), (((/* implicit */unsigned long long int) var_17)))))))))));
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((((long long int) 13896729197494815571ULL)), (((/* implicit */long long int) (short)31284)))))));
                            }
                        } 
                    } 
                    var_25 += ((/* implicit */short) -5136885845881848126LL);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) var_1);
}
