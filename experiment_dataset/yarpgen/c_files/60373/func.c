/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60373
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_13 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((max((((/* implicit */unsigned char) var_3)), (var_0))), (((/* implicit */unsigned char) ((signed char) var_3))))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((unsigned int) var_7)), (((/* implicit */unsigned int) var_8)))))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (2777173999U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15)))))) != (((long long int) var_8))));
                            var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_2))))));
                            var_17 = ((((/* implicit */_Bool) ((int) var_1))) && (((/* implicit */_Bool) ((var_10) - (max((var_10), (((/* implicit */unsigned int) var_0))))))));
                        }
                    } 
                } 
            }
            arr_11 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_9)))))) ^ (var_2)))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (max((var_2), (((/* implicit */unsigned long long int) var_11)))))))));
            arr_12 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((signed char) var_5))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_4)) : (var_2))) : (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */int) var_12))))))) >= (max((((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-39))) * (14651496102720303258ULL)))))));
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) 
                {
                    {
                        arr_17 [i_0] [i_1] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 683557814U)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) ((-964609756) >= (((/* implicit */int) (unsigned char)15)))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 1; i_7 < 23; i_7 += 4) 
                        {
                            arr_21 [i_7] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) -964609728))) == (((/* implicit */int) var_0))));
                            var_18 = ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)15))))) ? (max((((/* implicit */unsigned int) var_8)), (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (var_10))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_6)), (var_8)))) ? (max((((/* implicit */unsigned int) var_9)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 4) 
            {
                var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((var_4), (var_4))))));
                arr_26 [i_0] [i_8] [i_9] = max((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_6)), (max((((/* implicit */unsigned char) var_11)), (var_0)))))), (((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */unsigned int) var_5)) : (var_4))));
                arr_27 [i_0] [i_0] [i_0] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (var_7)))), (max((var_2), (((/* implicit */unsigned long long int) var_3)))));
            }
            /* vectorizable */
            for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 1) 
            {
                var_20 = ((/* implicit */long long int) ((var_2) >> (((((((/* implicit */int) var_1)) * (((/* implicit */int) var_9)))) + (8950)))));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_9))));
                            var_22 = ((long long int) (-(984222908U)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))) | (((var_10) | (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
            }
            for (int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                var_25 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))), (max((((/* implicit */unsigned int) var_9)), (var_10)))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_2))), (((/* implicit */unsigned long long int) var_11))))));
                var_26 = ((/* implicit */signed char) ((((((/* implicit */int) var_0)) < (((/* implicit */int) ((unsigned char) var_11))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((signed char) var_6))) : (((/* implicit */int) var_12)))) : ((-(((((/* implicit */int) (unsigned char)192)) / (var_5)))))));
                var_27 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) var_12)), (((max((((/* implicit */unsigned int) var_1)), (var_10))) + (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_9))))))));
                var_28 = ((/* implicit */signed char) max((max((var_4), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))))));
                arr_38 [i_8] = ((/* implicit */signed char) var_10);
            }
            /* vectorizable */
            for (unsigned int i_14 = 1; i_14 < 22; i_14 += 1) 
            {
                arr_41 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) && (var_6))) && (((/* implicit */_Bool) var_11))));
                arr_42 [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
            }
            arr_43 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */signed char) var_6)), (var_1)))) || (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) ((var_12) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_4)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
        }
    }
    /* LoopSeq 1 */
    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 1) 
    {
        arr_46 [i_15] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) var_8)), (max((var_4), (((/* implicit */unsigned int) var_6)))))), (((/* implicit */unsigned int) max((var_1), (((/* implicit */signed char) var_12)))))));
        var_29 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)240))));
    }
    var_30 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) >= (max((((/* implicit */unsigned int) var_0)), (var_10))))))) >= (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_12)), (var_10)))) ? (max((var_10), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_0), (((/* implicit */unsigned char) var_9))))))))));
    var_31 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_3))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_9)), (var_4)))))));
}
