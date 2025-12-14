/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67171
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
    var_11 -= ((/* implicit */long long int) (unsigned char)154);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_10 [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_2] [i_0 - 3] [i_3])) << (((((/* implicit */int) arr_6 [i_2] [i_0 - 1] [i_2])) - (24228))))) <= (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned char)154)))))))));
                            arr_11 [(short)10] [i_1] [i_0 - 1] = ((/* implicit */int) ((((((((/* implicit */long long int) ((/* implicit */int) (signed char)21))) & (-4880654544672511472LL))) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_1] [i_0]))))) * (((/* implicit */long long int) ((/* implicit */int) (short)2962)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (int i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_0 + 1] [i_1] [i_0 - 3] [i_0 - 2] [i_0 - 3] = ((((/* implicit */_Bool) 15797140004330910873ULL)) || (((/* implicit */_Bool) 0LL)));
                                var_12 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((var_7) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (4880654544672511472LL)))), (((unsigned long long int) arr_2 [7ULL])))), (((/* implicit */unsigned long long int) max((((long long int) arr_18 [19U] [19U] [i_4] [i_5] [(signed char)17])), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_6)), (arr_5 [i_6])))))))));
                                arr_20 [i_0] [i_0] [i_1] [i_0] [i_0 - 2] = ((/* implicit */int) min((((unsigned short) max((arr_7 [8U] [7ULL] [i_1]), (((/* implicit */long long int) var_5))))), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 422863058054450260LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_0 [i_0]))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 5U)))))))));
                                arr_21 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-4880654544672511470LL), (((/* implicit */long long int) arr_4 [i_6 + 3] [i_4] [i_1]))))) ? (((((/* implicit */int) (short)-1)) - (((/* implicit */int) arr_9 [1LL] [i_0] [5U] [i_4] [(short)19])))) : (((/* implicit */int) (_Bool)0))));
                                arr_22 [20LL] [i_6] [20LL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [4LL])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) min((((/* implicit */short) var_7)), (var_5))))))) : (((int) arr_15 [i_6 + 4] [i_4] [i_1] [i_0]))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 23; i_7 += 2) 
                {
                    for (unsigned char i_8 = 2; i_8 < 20; i_8 += 4) 
                    {
                        {
                            arr_29 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_7] [3ULL] [i_8 - 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_8] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 4880654544672511490LL)))) : ((+(4880654544672511468LL))))) : (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) -4880654544672511469LL)) && (((/* implicit */_Bool) arr_25 [i_0] [i_8] [i_7]))))) >> (((((((/* implicit */_Bool) 920031631)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_8)))) + (16066))))))));
                            arr_30 [i_1] [i_7] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) min((var_3), (((/* implicit */short) arr_1 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_1] [i_7]))) : (((1503801244U) & (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) : (((1023ULL) & (1423009044283949211ULL))));
                            arr_31 [i_1] [i_8 + 1] = ((/* implicit */short) arr_27 [i_1] [i_1] [i_1] [i_1] [i_1]);
                            arr_32 [i_0] [i_1] [(unsigned short)13] [13ULL] [i_7] [i_8] = ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (max((arr_24 [i_0] [20ULL] [i_0 - 2] [i_1]), (((/* implicit */unsigned long long int) var_0))))));
                        }
                    } 
                } 
                arr_33 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_18 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 645633298)) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_0] [i_1]))) : (6854126002970781259LL)))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)99)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 2) 
    {
        for (long long int i_10 = 0; i_10 < 25; i_10 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_11 = 3; i_11 < 24; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 2) 
                    {
                        {
                            arr_45 [i_9] [i_11] = ((/* implicit */unsigned long long int) -4880654544672511455LL);
                            arr_46 [i_12 + 3] [i_11] [i_11] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) ((min((-4880654544672511455LL), (((/* implicit */long long int) (unsigned short)1)))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_9))))))))) << (((max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (645633298) : (((/* implicit */int) var_7))))))) - (9335114747399383009ULL)))));
                            arr_47 [i_11] [i_11 - 2] [19LL] [i_11] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_4)), (arr_37 [i_11 + 1] [i_10])));
                            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) min((max((9136698092795592222ULL), (((/* implicit */unsigned long long int) (unsigned char)154)))), (((/* implicit */unsigned long long int) arr_34 [i_12 + 1] [i_11 + 1])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_13 = 1; i_13 < 24; i_13 += 2) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_38 [i_9] [i_10] [i_9])))) ? (arr_52 [i_14] [i_10] [i_13 - 1] [i_13 - 1] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                            arr_54 [i_9] [i_10] [i_13 + 1] [i_14] [i_14] [i_14] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_42 [i_9] [i_10] [i_13 - 1])) || (((/* implicit */_Bool) arr_42 [i_9] [6LL] [i_13 + 1]))))), (((((/* implicit */_Bool) arr_42 [i_9] [i_10] [i_13 - 1])) ? (((/* implicit */int) arr_42 [i_14] [i_10] [i_13 - 1])) : (((/* implicit */int) arr_42 [i_9] [(short)6] [i_13 - 1]))))));
                            arr_55 [i_14] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */short) arr_37 [i_9] [(unsigned short)8]);
                            var_15 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((arr_42 [i_9] [i_10] [i_14]), (((/* implicit */unsigned short) arr_36 [i_9] [i_10] [i_13]))))))) >= (arr_39 [i_14] [i_13 - 1]));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_4))))))) % (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_48 [2LL] [0] [2LL] [i_9])) - (((/* implicit */int) var_8))))), (arr_37 [i_9] [i_9]))))))));
                        }
                    } 
                } 
                arr_56 [2ULL] &= ((/* implicit */unsigned char) ((4880654544672511471LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32426)))));
                /* LoopNest 2 */
                for (unsigned short i_15 = 3; i_15 < 23; i_15 += 4) 
                {
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) var_4);
                            var_18 = ((/* implicit */short) var_10);
                            var_19 -= ((/* implicit */int) var_8);
                            var_20 ^= var_4;
                        }
                    } 
                } 
            }
        } 
    } 
}
