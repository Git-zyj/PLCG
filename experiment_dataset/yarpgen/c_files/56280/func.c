/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56280
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
    var_11 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned int) 17593890788310417300ULL);
        arr_2 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 2])) < (((/* implicit */int) arr_0 [i_0] [(unsigned char)11]))))))) > ((((_Bool)1) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 3])) == (((/* implicit */int) var_9))))) : (((((/* implicit */int) var_8)) + (((/* implicit */int) var_3))))))));
    }
    for (short i_1 = 1; i_1 < 7; i_1 += 2) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-13033)), (var_9))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-6)) || (((/* implicit */_Bool) arr_1 [i_1 + 1])))) && (arr_6 [i_1] [(short)4] [i_1])));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (var_8)));
                var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_1 + 1])))) == (((arr_7 [i_1] [i_1 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_11 [i_2] = ((((((((/* implicit */_Bool) var_0)) ? (852853285399134299ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1 - 1] [i_1 - 1] [i_2]))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_3]))))));
                    var_17 |= ((/* implicit */unsigned short) arr_8 [i_4]);
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+(arr_8 [i_4]))))));
                    var_19 = ((/* implicit */int) ((unsigned int) var_2));
                }
            }
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
        {
            arr_16 [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 + 3])))), (((/* implicit */int) var_1))));
            var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1 + 2] [i_1 - 1])) - (((/* implicit */int) (short)-8668))))) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_8 [i_1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-11983)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)8366)))))))))));
        }
        for (short i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
        {
            var_21 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (~(((/* implicit */int) var_3))))), (arr_13 [i_1] [9ULL])))) ? (((var_1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1 + 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)127))))) : (arr_4 [i_1 + 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (arr_8 [(unsigned short)5]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_1 + 2] [i_1 + 1] [i_1 - 1])) - (((/* implicit */int) arr_10 [i_1 + 3] [i_1 - 1] [i_1 + 3])))))));
            var_23 *= ((/* implicit */signed char) (-(((/* implicit */int) ((short) min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1 + 2])), (arr_4 [i_1 + 1])))))));
        }
    }
    var_24 = ((/* implicit */long long int) var_5);
    var_25 = ((/* implicit */signed char) ((max((max((2147483647), (((/* implicit */int) var_1)))), (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_0))))))) ^ ((~(((/* implicit */int) var_3))))));
}
