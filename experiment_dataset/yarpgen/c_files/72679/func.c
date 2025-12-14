/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72679
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) var_6))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_11 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_2] [i_2])) % (((/* implicit */int) arr_6 [i_2] [i_1])))) * (((/* implicit */int) var_4))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */int) ((unsigned int) min((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1]))));
                    var_12 ^= ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_0] [i_0 + 1] [i_0])) % (((/* implicit */int) arr_5 [(unsigned short)7] [i_0 - 1] [i_1])))) * ((+(((/* implicit */int) (short)-10431))))));
                    arr_9 [i_2] [i_1] [(unsigned char)1] [i_2] = ((/* implicit */short) min((((/* implicit */int) (short)10406)), ((+(((/* implicit */int) arr_6 [i_2] [i_2]))))));
                    arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1 - 2])) != (((/* implicit */int) arr_7 [i_2] [i_1] [i_1 + 1] [i_0]))))) != ((((-2147483647 - 1)) + (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_1] [i_2]))))));
                }
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    arr_14 [i_1] &= ((/* implicit */_Bool) (+((+((+(((/* implicit */int) arr_1 [(short)12]))))))));
                    var_13 = ((/* implicit */signed char) ((((unsigned long long int) 1681223789313468792LL)) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) * (((/* implicit */int) arr_0 [i_1])))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */int) (short)10422)) % (((/* implicit */int) (signed char)21))));
                    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) max((var_4), (((/* implicit */unsigned short) arr_12 [i_1 + 1] [i_1 + 1] [i_0 + 1])))))));
                    arr_15 [i_0] = ((/* implicit */long long int) ((int) max((arr_3 [i_0 - 1] [i_1 - 1]), ((unsigned short)15808))));
                }
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        arr_22 [i_4] [i_5] [i_0 - 2] [(_Bool)1] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [(_Bool)1] [i_5])))));
                        arr_23 [i_5] [i_5] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) ((1167152814) != (((/* implicit */int) (unsigned short)16))))))) : (((((/* implicit */int) arr_20 [i_1 - 1])) % (((/* implicit */int) arr_20 [i_1 - 2]))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_26 [i_1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-10412)) : (((/* implicit */int) arr_20 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-10435))))) : (((((/* implicit */int) arr_12 [i_0] [i_0] [i_4])) % (((/* implicit */int) var_7))))))) % (min((((/* implicit */unsigned long long int) arr_24 [i_1] [i_6] [i_6] [i_0 - 1])), (var_8)))));
                        var_16 -= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)120))));
                        var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_11 [i_1 - 1] [i_1] [i_1 - 2] [i_0 - 2]), (arr_11 [i_1 - 1] [i_1] [i_1 + 1] [i_0 - 1]))))));
                        var_18 = ((/* implicit */long long int) ((var_8) != ((((~(var_8))) % (((/* implicit */unsigned long long int) (~(var_2))))))));
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (+((((+(((/* implicit */int) (short)11528)))) % (var_3))))))));
                    }
                    for (unsigned int i_7 = 1; i_7 < 19; i_7 += 4) 
                    {
                        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_4] [i_4]))) != (var_8)))) - ((~(((/* implicit */int) (short)-11528)))))) % (((/* implicit */int) var_9))));
                        /* LoopSeq 2 */
                        for (short i_8 = 1; i_8 < 19; i_8 += 2) 
                        {
                            arr_31 [(unsigned short)5] [(unsigned short)5] [i_8] [(unsigned short)5] = ((/* implicit */long long int) ((unsigned long long int) (~(((/* implicit */int) arr_5 [i_1] [i_1 + 1] [14U])))));
                            var_21 = ((/* implicit */long long int) ((4294967295U) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_7 - 1] [i_1 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_18 [i_7 + 1] [i_1 + 1] [i_0 - 2])) : (((/* implicit */int) arr_18 [i_7 - 1] [i_1 - 2] [i_0 - 2])))))));
                            arr_32 [i_4] [i_1] [i_7] [i_7 + 1] [i_8] [i_8] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49731))) : (3131467303429688017LL)));
                            var_22 = ((/* implicit */unsigned long long int) min((((long long int) (_Bool)1)), (((/* implicit */long long int) ((short) arr_3 [i_0] [i_0 - 2])))));
                            var_23 -= ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_13 [(unsigned short)14] [(unsigned short)14] [(_Bool)1])) != (((/* implicit */int) (unsigned short)58520)))))), ((~(1073741824)))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((unsigned long long int) (-(((/* implicit */int) ((unsigned short) arr_24 [i_0] [i_9] [i_9] [i_7]))))));
                            arr_36 [3] [i_7] [i_9] [(unsigned short)9] [i_9] [i_1] [i_0 - 2] = ((short) ((short) ((((/* implicit */_Bool) 3661822293139258169LL)) ? (((/* implicit */int) var_4)) : (arr_24 [i_7] [i_9] [(signed char)10] [i_7 + 1]))));
                            var_25 = (+(((/* implicit */int) ((unsigned short) (_Bool)1))));
                        }
                        var_26 = ((/* implicit */short) var_3);
                        var_27 -= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_25 [i_4] [i_0 - 1])) * (var_6))) * (((((/* implicit */int) arr_25 [i_4] [i_0 + 1])) - (((/* implicit */int) arr_25 [i_4] [i_0 + 1]))))));
                    }
                    var_28 -= ((/* implicit */short) (-(((max((562949953421311LL), (((/* implicit */long long int) arr_11 [7] [i_1 - 2] [7] [7])))) % (((/* implicit */long long int) ((unsigned int) 1681223789313468792LL)))))));
                }
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) /* same iter space */
                {
                    var_29 = ((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))) * ((+(((((/* implicit */_Bool) (short)-10412)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)3)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 1; i_11 < 20; i_11 += 4) 
                    {
                        for (short i_12 = 1; i_12 < 17; i_12 += 3) 
                        {
                            {
                                arr_44 [i_11] [5ULL] [5ULL] [i_11] [(unsigned short)8] = ((/* implicit */unsigned short) ((short) (~(((unsigned int) arr_19 [i_0] [i_1] [i_10] [i_11 + 1])))));
                                var_30 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_11] [(unsigned short)18] [i_11 - 1] [i_11 + 1] [i_11 + 1]))) % (var_8))) % (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))) * (10U))))));
                                var_31 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_11]))) % (((unsigned long long int) var_7)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 3 */
                for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    for (short i_14 = 0; i_14 < 21; i_14 += 2) 
                    {
                        for (short i_15 = 0; i_15 < 21; i_15 += 2) 
                        {
                            {
                                arr_54 [i_0] [i_1] [i_13] [i_14] [i_13] = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)51982), ((unsigned short)7034))))) : (((long long int) 4294705152U)))) != (((/* implicit */long long int) ((((unsigned int) arr_21 [i_0])) - (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0 - 1] [i_0 - 2]))))))));
                                arr_55 [i_13] = ((/* implicit */_Bool) (((~(((/* implicit */int) arr_12 [(unsigned short)8] [i_1 - 1] [(short)5])))) & (((((/* implicit */int) arr_12 [15U] [i_1 + 1] [i_1 + 1])) ^ (((/* implicit */int) var_9))))));
                                var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) min((((/* implicit */int) ((short) (signed char)-74))), ((~(((/* implicit */int) var_1)))))))));
                                arr_56 [14] [i_13] [(short)10] = ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_13] [i_13])) | (((/* implicit */int) arr_6 [i_13] [i_13])))) | (((/* implicit */int) min(((unsigned short)7037), (arr_6 [i_13] [i_13]))))));
                                var_33 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)13828)) != (((/* implicit */int) (unsigned short)13828))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_34 = var_3;
    var_35 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_6) % (var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 65535U))))) : (((/* implicit */int) var_9)))) % ((-(((/* implicit */int) (unsigned short)24790))))));
    var_36 = ((/* implicit */int) (~((~(var_2)))));
}
