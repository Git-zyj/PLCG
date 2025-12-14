/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67543
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_0 [2U] [2U])) != (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]))))), ((-((+(((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))))))))));
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_0);
                    arr_10 [i_0] = arr_5 [i_0] [i_1 + 2] [i_2];
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 3) 
        {
            arr_16 [i_4] [i_3] [i_3] = ((/* implicit */long long int) ((((((((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [i_4])) + (((/* implicit */int) var_11)))) ^ (((/* implicit */int) ((((/* implicit */int) arr_8 [i_3] [i_4] [i_4 - 2])) == (((/* implicit */int) (unsigned char)28))))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_3]))) == (((long long int) arr_3 [i_3])))))));
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_1 [(_Bool)1]))));
        }
        for (signed char i_5 = 1; i_5 < 10; i_5 += 2) 
        {
            var_15 ^= ((/* implicit */_Bool) ((unsigned char) (signed char)125));
            var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_0 [i_5] [i_5 + 1])) + ((+(((/* implicit */int) arr_17 [i_3] [i_5]))))))));
        }
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned long long int) min((5360431288605883907LL), (5360431288605883907LL)))), (((unsigned long long int) var_0))))))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 24; i_6 += 4) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */signed char) var_5);
        var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 63912407U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6]))) : (-5360431288605883889LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6 - 1]))) : (min((((/* implicit */unsigned int) var_11)), (var_9)))))));
        arr_22 [i_6 - 1] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)18112)) < (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_20 [i_6 + 1])) : (((/* implicit */int) (short)-32746)))))))));
    }
    var_19 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) 5360431288605883903LL)) ? (5360431288605883907LL) : (-5360431288605883918LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
