/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89863
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
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        var_10 *= ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) (~(258231393U)))))));
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((arr_2 [i_0 + 1]) + (((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) var_4)))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_6 [i_0 + 2] [6U] &= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_2))))) ? ((((_Bool)0) ? (-5883196629790909742LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10568))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_3))))))) > (((/* implicit */long long int) ((unsigned int) ((_Bool) var_5))))));
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((var_8) ? (arr_2 [(_Bool)1]) : (((/* implicit */int) arr_0 [14]))))))) ? (((unsigned long long int) ((long long int) (signed char)23))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0] [8LL])))))))));
        }
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((_Bool) var_0)))))) : (((unsigned int) ((unsigned short) var_0))))))));
    }
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 4; i_5 < 9; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (((~(var_1))) ^ (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
                                var_15 ^= min((((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) - (arr_2 [i_4]))) / (((((/* implicit */int) arr_8 [i_3])) - (((/* implicit */int) arr_5 [i_4] [i_4]))))))), ((-(var_9))));
                                var_16 -= ((_Bool) ((signed char) var_7));
                                var_17 ^= var_1;
                                var_18 *= ((/* implicit */unsigned int) max(((signed char)23), ((signed char)15)));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */unsigned short) arr_15 [i_4] [i_3] [i_3] [9LL]);
                    var_20 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) min(((short)-7153), (((/* implicit */short) var_8))))), (arr_3 [i_2] [i_3 + 1] [i_2])))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (arr_3 [i_2] [i_3 + 1] [5LL])))) ? (((/* implicit */unsigned long long int) -5772487350122599005LL)) : (arr_18 [i_2] [i_2] [i_2] [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [(_Bool)1] [i_3] [i_3] [i_4]))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((max((var_8), (((var_8) || (((/* implicit */_Bool) var_0)))))) ? ((+(min((((/* implicit */unsigned int) (signed char)15)), (var_7))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) 8465454060309706338LL)))))))))))));
}
