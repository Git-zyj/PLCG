/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78048
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
    var_14 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) (~((+(-1LL)))));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [i_1])))) || ((!(arr_3 [i_0] [i_1])))))) <= ((+(((/* implicit */int) min(((_Bool)0), (arr_5 [i_1] [i_0]))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                var_16 = ((((arr_2 [i_0] [(_Bool)1]) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((/* implicit */int) arr_2 [i_2] [i_2]))))));
                var_17 = ((/* implicit */short) ((((((((/* implicit */int) arr_1 [i_1] [i_2])) * (((/* implicit */int) arr_0 [i_2])))) + (2147483647))) << (((((/* implicit */int) ((var_10) < (var_2)))) - (1)))));
            }
            for (signed char i_3 = 2; i_3 < 22; i_3 += 3) 
            {
                var_18 = ((/* implicit */_Bool) var_10);
                arr_11 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_3)))))));
                var_19 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))) : (-1LL)))));
                arr_12 [i_0 - 1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) max((((/* implicit */signed char) arr_7 [i_0] [(_Bool)1] [(_Bool)1])), (var_7))))) - (((/* implicit */int) (_Bool)1))));
            }
            for (short i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                var_20 = ((/* implicit */signed char) ((((var_4) << (((/* implicit */int) var_3)))) == (((/* implicit */unsigned int) max((((((/* implicit */int) var_9)) - (((/* implicit */int) arr_3 [i_1] [i_4])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                arr_16 [i_0 - 1] [i_1] [i_4] [2ULL] = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) ((-1LL) < (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4]))))))) | (max((((/* implicit */unsigned long long int) arr_0 [i_4])), (var_10))))));
                var_21 = ((/* implicit */unsigned char) var_7);
            }
            var_22 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_8 [(_Bool)0])) > (((/* implicit */int) var_11)))));
            var_23 = ((/* implicit */_Bool) ((short) (~(134217727U))));
        }
        for (signed char i_5 = 3; i_5 < 19; i_5 += 3) 
        {
            var_24 = ((/* implicit */unsigned char) ((short) ((unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_20 [i_0]))))));
            arr_21 [i_0] [i_0] [i_5 - 2] = ((/* implicit */signed char) arr_20 [i_0]);
            var_25 = ((/* implicit */long long int) ((_Bool) var_7));
            var_26 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) arr_10 [i_0 - 1])));
        }
        arr_22 [i_0] [(_Bool)1] = ((/* implicit */signed char) (unsigned char)167);
    }
    for (long long int i_6 = 0; i_6 < 23; i_6 += 4) 
    {
        var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6])) && (var_8)))))))));
        arr_26 [i_6] = ((/* implicit */unsigned char) var_7);
        var_28 = ((/* implicit */_Bool) ((unsigned short) ((signed char) arr_7 [i_6] [i_6] [i_6])));
    }
    var_29 = ((/* implicit */_Bool) min(((+(425846188U))), (((/* implicit */unsigned int) (_Bool)1))));
}
