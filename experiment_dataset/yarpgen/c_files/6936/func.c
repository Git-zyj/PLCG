/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6936
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
    var_20 = ((/* implicit */long long int) (-((~(((/* implicit */int) ((unsigned short) var_11)))))));
    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_1))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) var_6)) : (var_9))))), (((((/* implicit */unsigned int) (-(var_6)))) ^ (var_3))))))));
        var_23 = ((/* implicit */short) (-((-(((/* implicit */int) arr_0 [i_0]))))));
        var_24 = ((/* implicit */int) var_13);
        var_25 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) arr_3 [i_1 + 1]);
        var_26 ^= var_11;
        /* LoopNest 2 */
        for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
        {
            for (unsigned short i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                {
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((var_18) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) -3003605101927807755LL)))))))))));
                    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_13))));
                    var_29 = ((/* implicit */short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 3691974815090069470LL))))), (arr_5 [i_1 - 1])));
                    var_30 ^= var_5;
                }
            } 
        } 
    }
    for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
        {
            arr_17 [i_5] [i_4] = ((/* implicit */unsigned long long int) ((1881476046U) << (((2413491232U) - (2413491218U)))));
            var_31 -= ((/* implicit */unsigned long long int) (+(var_5)));
            arr_18 [i_4] [i_5] [i_5] = ((/* implicit */int) var_7);
        }
        for (long long int i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
        {
            arr_23 [i_4] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), ((short)13779))))) + (var_1)))) | (arr_16 [i_4])));
            arr_24 [i_4] [i_6] [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) var_19))));
            /* LoopSeq 3 */
            for (unsigned char i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                arr_28 [i_4] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)7488))))) ? (max((((((/* implicit */_Bool) var_3)) ? (arr_16 [i_7]) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) var_10)))) : (min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) var_10))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        {
                            var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) var_14))) << (((max((((/* implicit */long long int) var_14)), (var_9))) - (381092423944000597LL)))));
                            arr_34 [i_4] [i_7] [i_7] [i_7] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_4))))));
                            arr_35 [i_4] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)36268));
                        }
                    } 
                } 
            }
            for (int i_10 = 4; i_10 < 23; i_10 += 4) /* same iter space */
            {
                var_33 += ((/* implicit */signed char) (+(min((var_5), (((/* implicit */long long int) var_2))))));
                var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) arr_25 [i_4] [i_4] [i_4] [i_4]))));
                var_35 = ((((/* implicit */_Bool) ((unsigned char) var_15))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [(unsigned short)22])) && (((/* implicit */_Bool) var_6)))))));
                arr_39 [i_4] [i_4] [i_10 - 4] &= ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) ((signed char) var_2)))));
            }
            for (int i_11 = 4; i_11 < 23; i_11 += 4) /* same iter space */
            {
                var_36 = ((/* implicit */unsigned long long int) ((signed char) ((((((/* implicit */unsigned long long int) var_6)) % (arr_16 [i_11]))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)13779))))))));
                var_37 = ((/* implicit */signed char) min((arr_11 [i_6] [i_6]), (((/* implicit */unsigned int) var_12))));
            }
            var_38 = ((/* implicit */unsigned int) var_1);
        }
        var_39 = ((/* implicit */int) ((short) (+(((/* implicit */int) arr_20 [i_4] [i_4])))));
    }
}
