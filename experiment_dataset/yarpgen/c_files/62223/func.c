/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62223
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)179)) % (((/* implicit */int) (unsigned char)179)))))));
                var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) (((((_Bool)1) || ((_Bool)1))) ? ((((_Bool)1) ? (-786710662) : (((/* implicit */int) (short)25783)))) : ((-(((/* implicit */int) (signed char)-25)))))))));
            }
        } 
    } 
    var_11 += ((((((/* implicit */_Bool) (signed char)-29)) ? (var_4) : (var_3))) | (((/* implicit */int) var_1)));
    /* LoopSeq 2 */
    for (int i_2 = 4; i_2 < 10; i_2 += 4) 
    {
        var_12 = ((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)28647)))), (((/* implicit */int) (unsigned short)28642))));
        arr_10 [i_2] = ((/* implicit */unsigned int) max((2652243136450872891LL), (((((((/* implicit */_Bool) 2652243136450872889LL)) ? (-2652243136450872889LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)11))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28647)))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) >> (((((/* implicit */int) (unsigned short)28647)) - (28643)))));
        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)5859))));
        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)1)) ? (2652243136450872889LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)82)))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            arr_18 [i_4] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)36869))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))) < (2630536896U)));
            arr_19 [i_4] [i_4] = ((/* implicit */unsigned int) (unsigned char)176);
            /* LoopNest 2 */
            for (unsigned int i_5 = 3; i_5 < 14; i_5 += 2) 
            {
                for (int i_6 = 1; i_6 < 14; i_6 += 1) 
                {
                    {
                        arr_25 [i_3] [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) (~(7)));
                        arr_26 [i_4] [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)26))) : (278134509U))) / (((/* implicit */unsigned int) (-2147483647 - 1)))));
                    }
                } 
            } 
            arr_27 [i_4] = (((_Bool)1) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)65515)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (short)14334)));
        }
        /* LoopNest 2 */
        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 1) 
        {
            for (unsigned int i_8 = 1; i_8 < 11; i_8 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 2; i_9 < 14; i_9 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_10 = 2; i_10 < 12; i_10 += 3) 
                        {
                            var_17 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))));
                            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) (unsigned char)185)) ? (((((/* implicit */int) (short)30614)) - (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)30407))))));
                        }
                        for (long long int i_11 = 0; i_11 < 15; i_11 += 1) /* same iter space */
                        {
                            var_19 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-32757)) ? (2147483646) : (((((/* implicit */int) (signed char)23)) / (((/* implicit */int) (_Bool)1))))));
                            var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)54589))));
                        }
                        for (long long int i_12 = 0; i_12 < 15; i_12 += 1) /* same iter space */
                        {
                            arr_42 [(unsigned char)11] [i_7] [i_8] [i_7] [i_3] = ((((/* implicit */int) (signed char)-29)) < (((/* implicit */int) (_Bool)1)));
                            arr_43 [i_3] [i_3] [i_8 + 1] [i_9] [i_7] = ((/* implicit */short) ((((/* implicit */int) (short)(-32767 - 1))) & (((/* implicit */int) (signed char)19))));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_46 [i_7] [1] [i_8] [i_9] [i_13] = (((_Bool)1) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (unsigned short)37750)));
                            arr_47 [i_3] [i_7] [i_7] [i_9] [i_9] [i_7 + 4] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) 1991346907U))));
                            var_21 |= ((/* implicit */unsigned long long int) ((125787913U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            arr_48 [i_9] |= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)29072))));
                        }
                    }
                    for (short i_14 = 0; i_14 < 15; i_14 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned int) (unsigned short)58899);
                        arr_52 [(unsigned char)1] [i_7] [i_7] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)156))));
                    }
                    var_23 = (-((-(4097027471U))));
                }
            } 
        } 
    }
}
