/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88653
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
    var_10 = var_9;
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))));
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_7)))))) << (((((/* implicit */int) (short)26987)) - (26974)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) var_1))));
                            var_14 = ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_9 [i_3 + 1] [6U] [6U] [i_3 + 1] [i_3])))) ? (((((((/* implicit */int) arr_1 [i_2] [i_3])) > (var_2))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (arr_8 [i_1] [i_1] [i_1] [i_3 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [(short)4]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) % (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */int) var_0)) >> (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))))))));
                            var_15 = ((/* implicit */signed char) ((int) var_1));
                            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) max((((arr_4 [i_0]) ? (((/* implicit */int) arr_4 [i_2 + 2])) : (((/* implicit */int) var_4)))), ((-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_2))));
                                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((var_8) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) var_2)))) | (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_5 [i_0] [10LL]) : (arr_5 [i_4] [i_6])))) ? (((/* implicit */int) var_5)) : ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_8))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        {
                            var_20 = (_Bool)1;
                            var_21 = ((/* implicit */long long int) ((var_1) + (((/* implicit */unsigned int) max((arr_19 [i_7]), (arr_19 [i_0]))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_4 [i_1]))));
                            var_23 = ((/* implicit */unsigned char) (!(min(((_Bool)1), ((_Bool)1)))));
                        }
                    } 
                } 
                arr_21 [i_0] [i_0] [i_1] = ((/* implicit */short) ((min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (_Bool)1)))))) * (((((/* implicit */_Bool) arr_18 [i_0])) ? ((~(((/* implicit */int) var_0)))) : ((+(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) ((unsigned char) var_9));
}
