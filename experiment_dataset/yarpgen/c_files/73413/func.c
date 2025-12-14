/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73413
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
    var_17 = ((/* implicit */int) max((var_9), (((/* implicit */long long int) (+(((((/* implicit */int) var_5)) - (((/* implicit */int) (_Bool)0)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 -= ((/* implicit */unsigned long long int) ((_Bool) var_3));
                    var_19 = ((/* implicit */signed char) ((_Bool) var_3));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((unsigned short) 9393202742998891856ULL))) ? (((((/* implicit */int) arr_3 [i_2] [i_0])) + (-495563706))) : (max((arr_9 [i_0]), (((/* implicit */int) var_11)))))), (((int) min((arr_12 [i_0] [i_1] [i_1] [i_3]), (((/* implicit */long long int) var_5)))))));
                                var_21 -= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_11 [i_0] [(signed char)10] [i_2] [i_3] [i_4 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 22; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_2] [i_0] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_2] [i_6]))) : (4102354349037124381ULL)))) ? (6665707682027124133ULL) : (((((/* implicit */_Bool) 11781036391682427483ULL)) ? (((/* implicit */unsigned long long int) var_9)) : (6665707682027124133ULL))))), (((/* implicit */unsigned long long int) 1731729036)));
                                arr_21 [i_0] [i_1] [i_0] [13ULL] [i_6] = (i_0 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)102)), (arr_15 [i_0] [i_5 + 1] [i_5 - 1] [10])))) << (((((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_5 - 2] [i_5 - 2] [i_5])), (arr_15 [i_0] [i_5 - 1] [i_5 - 1] [i_5 - 1])))) - (17292)))))) : (((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)102)), (arr_15 [i_0] [i_5 + 1] [i_5 - 1] [10])))) << (((((((((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_0] [i_5 - 2] [i_5 - 2] [i_5])), (arr_15 [i_0] [i_5 - 1] [i_5 - 1] [i_5 - 1])))) - (17292))) + (4221))) - (20))))));
                                arr_22 [i_0] [i_1] [i_5 + 1] = ((/* implicit */int) arr_18 [(_Bool)1] [(_Bool)1] [i_2] [i_5 - 2] [(_Bool)0]);
                                var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_17 [i_0] [i_1] [i_0])) != (((/* implicit */int) arr_17 [i_0] [i_5 - 1] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (+(var_3)));
}
