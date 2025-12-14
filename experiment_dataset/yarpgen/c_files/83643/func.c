/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83643
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
    var_13 = ((/* implicit */long long int) (~(((1072693248U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768)))))));
    var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= (var_10)));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1654520330)) ^ (7063573062625935976ULL)))) ? (min((((/* implicit */unsigned int) (short)-21973)), (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)6544)) == (((/* implicit */int) (signed char)-72))))) : (-296933116))))));
    var_16 = var_8;
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_7 [14ULL] [i_1] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_0 - 1] [i_1])))) / (arr_5 [i_0] [i_1])));
            var_17 -= ((/* implicit */unsigned long long int) arr_3 [(short)19]);
        }
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            var_18 += ((/* implicit */unsigned long long int) arr_9 [i_0 + 2] [i_0 - 1]);
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_9 [i_0 - 1] [(signed char)19])) >= (11383171011083615620ULL))))));
            var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_7)) : (5680713711045693495LL))) & (((/* implicit */long long int) 296933116))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7063573062625935996ULL)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (unsigned short)3139))));
            arr_10 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (-(var_10)));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_3] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : ((-(((/* implicit */int) (signed char)-15))))));
            arr_14 [i_0] [i_0] = ((/* implicit */short) (unsigned short)32768);
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                var_22 = ((/* implicit */_Bool) arr_8 [i_4]);
                arr_18 [i_0] = ((/* implicit */unsigned long long int) (+(-24866504)));
                var_23 = ((/* implicit */unsigned char) (+(var_7)));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        {
                            arr_24 [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) (unsigned char)43)) : (((/* implicit */int) arr_12 [i_5] [i_0 - 1] [i_4]))));
                            var_24 -= ((/* implicit */unsigned long long int) ((long long int) arr_15 [i_0 + 2] [i_3] [i_3] [i_5]));
                        }
                    } 
                } 
                var_25 ^= ((/* implicit */unsigned int) ((int) arr_6 [i_0] [i_0 + 2] [i_4]));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_27 [i_0] = ((/* implicit */unsigned short) arr_17 [i_0] [i_3]);
                arr_28 [i_7] [i_3] [i_0 - 1] = ((/* implicit */long long int) ((unsigned long long int) 0U));
            }
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                arr_31 [i_8] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_8] [i_8] [i_3] [i_0])) << (((((((/* implicit */int) var_12)) - (-61121437))) - (61181907)))));
                var_26 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12600514879428056179ULL)) ? (1675906941U) : (var_1)))) ? (arr_3 [(unsigned char)6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                arr_32 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_22 [17LL] [i_0] [i_3] [i_3] [i_0] [i_0]))))));
            }
            var_27 += ((/* implicit */unsigned int) arr_23 [i_0] [i_0 + 1] [i_0] [i_3] [i_3] [i_3]);
        }
        arr_33 [i_0] = ((/* implicit */unsigned short) (+(2097152U)));
        arr_34 [i_0] [i_0] = ((/* implicit */signed char) var_4);
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (~(arr_8 [i_0 - 1]))))));
    }
    /* vectorizable */
    for (long long int i_9 = 1; i_9 < 18; i_9 += 1) /* same iter space */
    {
        var_29 += ((/* implicit */unsigned short) ((_Bool) 10247900267791117951ULL));
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (long long int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                {
                    var_30 += ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))) * (((/* implicit */int) var_4))));
                    arr_45 [i_9] = ((/* implicit */_Bool) ((int) (unsigned char)32));
                    arr_46 [i_9] [i_9] [i_11] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 3; i_12 < 18; i_12 += 2) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            {
                                arr_54 [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */int) var_12)) > ((+(-296933116)))));
                                arr_55 [i_9] [i_10] [19U] [i_9] [i_13] = var_12;
                                arr_56 [i_9] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_12 [i_9 + 2] [i_9] [i_9 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_57 [i_9 + 2] [i_9] = ((/* implicit */short) ((unsigned long long int) arr_8 [i_9 + 1]));
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) var_12))));
    }
}
