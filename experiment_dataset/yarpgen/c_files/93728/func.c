/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93728
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
    var_16 = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((min((min((var_14), (((/* implicit */int) (unsigned char)248)))), (((/* implicit */int) var_4)))) + (865303317))) - (9)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((int) ((short) max((((/* implicit */long long int) var_15)), (-8646498745800263726LL)))));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            var_17 ^= (short)(-32767 - 1);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                arr_7 [i_0 + 2] [i_1] [i_0] = (-(((/* implicit */int) ((arr_3 [i_0 - 2] [i_0]) != (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0])))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (_Bool)1))));
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_19 ^= ((/* implicit */unsigned int) arr_1 [i_0]);
                var_20 = ((/* implicit */short) (((~(((/* implicit */int) var_6)))) & (((/* implicit */int) var_2))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max(((~(201701728U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_0 [i_1])))))))) ? (((/* implicit */long long int) ((((unsigned int) arr_9 [i_1] [i_4])) >> (((((long long int) (unsigned short)64)) - (63LL)))))) : (-902256497636530090LL)));
                var_22 = (!(((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_4]))) : (6688316442938791969LL))) > (((/* implicit */long long int) ((/* implicit */int) min(((short)-27613), (((/* implicit */short) arr_11 [i_0] [i_0 + 1] [i_0] [i_0])))))))));
            }
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_23 -= ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_14 [(unsigned char)8] [(unsigned char)8] [i_5]))))));
            arr_15 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [4LL])) && (((/* implicit */_Bool) (unsigned short)9))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_0] [i_0])))))));
        }
        for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            var_24 = (~(((/* implicit */int) (((+(var_11))) > (((/* implicit */long long int) (~(((/* implicit */int) (short)8274)))))))));
            arr_18 [(signed char)6] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) max(((short)8274), (((/* implicit */short) (unsigned char)70))))))));
            arr_19 [i_0] [12LL] = max((((((/* implicit */_Bool) (+(1008806316530991104LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_17 [i_0] [i_0]))) && (((var_13) < (((/* implicit */unsigned int) arr_9 [i_0] [8ULL]))))))));
        }
        var_25 |= ((/* implicit */unsigned int) (-((+((+(((/* implicit */int) (unsigned short)21))))))));
        arr_20 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned short)59033)), (min(((+(((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (arr_10 [(short)7] [i_0] [i_0]))))))));
    }
    var_26 &= ((/* implicit */long long int) min((max((max((3593403055U), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) var_15)))), (((/* implicit */unsigned int) (+(((((/* implicit */int) (short)32764)) % (var_14))))))));
    var_27 += ((/* implicit */short) (~(((((var_11) != (((/* implicit */long long int) var_14)))) ? (((/* implicit */int) var_7)) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_2))))))));
}
