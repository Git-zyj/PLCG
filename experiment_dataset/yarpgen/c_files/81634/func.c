/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81634
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (max((((/* implicit */unsigned long long int) var_10)), (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)12001))))) == (var_4)))) : ((-(((/* implicit */int) max((var_10), ((unsigned short)53535))))))));
    var_13 = ((/* implicit */long long int) var_5);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)34))) ^ (var_4))) : (((/* implicit */long long int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (unsigned char)224))))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    {
                        arr_9 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_1]);
                        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_1 + 2] [i_3]))))))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */long long int) ((arr_8 [i_0] [i_1] [i_2] [i_3] [i_3]) | (((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [20LL]))));
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)53552)) != (((/* implicit */int) (unsigned short)53537))));
                        }
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 2) 
                {
                    var_18 |= ((/* implicit */_Bool) var_1);
                    var_19 = ((/* implicit */signed char) (+(arr_16 [i_1 + 3] [i_1 + 1])));
                }
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [(signed char)13] [(short)4] [(short)4] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
            }
            for (long long int i_7 = 2; i_7 < 18; i_7 += 2) 
            {
                arr_21 [i_1] [i_7] [i_1] [6U] = ((/* implicit */long long int) ((((/* implicit */_Bool) 15567832636931026978ULL)) ? (645663131) : (((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_0] [i_1] [i_7])))));
                arr_22 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-20726)) ? (arr_16 [i_1 + 1] [i_7 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1 + 1] [i_1])))));
                var_21 = ((/* implicit */_Bool) (short)19426);
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    for (long long int i_9 = 3; i_9 < 19; i_9 += 2) 
                    {
                        {
                            var_22 |= ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-117))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15537))) : (-9050879005039022811LL)));
                        }
                    } 
                } 
            }
            var_24 |= ((arr_25 [i_1 + 4] [(unsigned char)18] [i_1]) < (arr_12 [i_0] [i_1 + 4] [i_1 + 4] [i_1 + 2]));
        }
        var_25 += ((/* implicit */int) ((long long int) ((signed char) max((((/* implicit */unsigned int) (unsigned char)147)), (arr_25 [i_0] [4] [i_0])))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) var_5))));
        var_27 = ((/* implicit */unsigned short) max((((max((var_0), (var_8))) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_1))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((4208370567U), (((/* implicit */unsigned int) (short)-8489))))))))));
    }
}
