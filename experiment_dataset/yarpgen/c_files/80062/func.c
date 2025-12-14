/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80062
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
    var_12 ^= ((/* implicit */int) (+(((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) (unsigned short)52740)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    var_13 &= ((/* implicit */long long int) max((max((((int) var_6)), (((/* implicit */int) var_7)))), (((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_3);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-2147483647 - 1));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(var_1))) / (max((var_3), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))) != (((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) (signed char)-19)))))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_15 &= ((/* implicit */long long int) var_7);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            for (unsigned int i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        arr_15 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_1 [i_1 + 1])))), ((+((-(((/* implicit */int) arr_11 [i_1] [i_1] [i_3] [i_3]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_16 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (signed char)-4)))) ? (((/* implicit */int) arr_11 [i_5] [i_5] [6U] [i_5])) : (((/* implicit */int) arr_7 [i_1]))));
                            arr_18 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */signed char) (((!(arr_7 [i_1]))) ? ((-(((/* implicit */int) (_Bool)0)))) : ((+(((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))));
                            var_17 &= ((/* implicit */_Bool) (+(((/* implicit */int) var_4))));
                            var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_4 [i_1] [i_1])))) <= (var_8)));
                        }
                    }
                } 
            } 
        } 
        arr_19 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)28771)) != (((/* implicit */int) (_Bool)1))))), ((unsigned short)31920)));
    }
    var_19 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
}
