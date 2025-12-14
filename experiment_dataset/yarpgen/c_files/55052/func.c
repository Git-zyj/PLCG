/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55052
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] &= ((/* implicit */signed char) (-(((/* implicit */int) arr_2 [i_0] [i_0]))));
        arr_5 [i_0] [(short)11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 6351583707999417154LL)) ? (arr_3 [i_0]) : (((/* implicit */long long int) (+(var_10))))));
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((var_1) * (((/* implicit */int) (unsigned short)0)))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            arr_9 [i_0] [(unsigned char)18] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 15317224907293429500ULL))));
            var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109))) % (arr_7 [i_0] [i_1 + 1] [i_1])));
            var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)214))));
        }
        for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
        {
            var_15 = ((unsigned char) var_5);
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)65528)))))));
            var_17 ^= ((/* implicit */unsigned short) (!((_Bool)1)));
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(-471513949))))));
                arr_18 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((arr_6 [i_2] [i_0]) / (((/* implicit */unsigned long long int) arr_3 [i_0]))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_14 [i_5] [i_5] [i_4] [i_5]))));
                            arr_28 [i_0] [i_0] [i_0] [(_Bool)1] [(unsigned short)9] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)112))));
                        }
                    } 
                } 
                arr_29 [i_2] [i_2] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((signed char) -1904944587));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                {
                    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [(signed char)2]))))))))));
                    var_21 ^= ((((arr_14 [i_0] [i_2] [(signed char)20] [i_0]) ? (7035151958626741458ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) % (((/* implicit */unsigned long long int) var_1)));
                    var_22 ^= ((/* implicit */signed char) (-(arr_25 [i_0] [i_0] [i_0] [(_Bool)1] [i_0])));
                    arr_34 [i_7] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
                    arr_35 [i_0] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (-4693797220204841245LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))));
                }
                for (int i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    var_23 ^= ((/* implicit */unsigned short) ((long long int) (signed char)-86));
                    arr_38 [i_0] [i_0] [i_2] [i_7] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_7) : (((/* implicit */unsigned long long int) var_1))))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (4693797220204841245LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_10] [i_7] [(unsigned char)1] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((var_7) * (((/* implicit */unsigned long long int) 471513949)))))))));
                }
                for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
                {
                    arr_44 [i_0] [i_2] [i_7] [i_11] = ((/* implicit */signed char) ((short) var_8));
                    arr_45 [i_0] [i_2] [i_7] [i_7] = ((/* implicit */signed char) var_1);
                }
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 3) 
    {
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) var_5))))))));
        arr_49 [i_12] = ((/* implicit */signed char) (+(-4693797220204841245LL)));
    }
    for (unsigned char i_13 = 0; i_13 < 10; i_13 += 4) 
    {
        arr_52 [(unsigned short)9] = min((((/* implicit */int) ((var_9) != (arr_23 [i_13] [i_13])))), (((((/* implicit */int) arr_41 [i_13] [i_13] [i_13] [i_13])) / (((((/* implicit */_Bool) arr_31 [i_13] [(short)6] [i_13])) ? (-471513949) : (((/* implicit */int) var_8)))))));
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_19 [i_13] [i_13]))) != (((((/* implicit */int) arr_19 [i_13] [i_13])) % (((/* implicit */int) var_0)))))))));
        arr_53 [(short)9] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((var_4) % (((/* implicit */int) (signed char)-37)))), (((int) var_8)))))));
    }
    var_28 = ((/* implicit */short) var_9);
    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)120)))) * (((/* implicit */int) var_8))))), (var_6))))));
}
