/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98788
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_4 [i_0]))))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))) > (var_15)))))) + (((/* implicit */int) max((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)6)))))))))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) (unsigned short)65530)), (0U)))));
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967270U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967270U)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_1] [i_1])), (var_15))))), (((/* implicit */unsigned long long int) var_2)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_12);
    /* LoopNest 3 */
    for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
    {
        for (unsigned int i_3 = 3; i_3 < 21; i_3 += 2) 
        {
            for (unsigned short i_4 = 2; i_4 < 21; i_4 += 2) 
            {
                {
                    arr_14 [i_4] [i_3] [i_4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (((/* implicit */int) arr_4 [i_3 + 1])) : (((/* implicit */int) arr_2 [i_2 + 2]))))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)13)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((((/* implicit */int) arr_13 [i_2])) >= (((/* implicit */int) var_11)))))))) : (min((((/* implicit */unsigned int) arr_3 [i_3 - 2] [i_3 + 1] [i_4])), (arr_7 [i_3 - 2])))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                arr_21 [i_2] [i_6] [i_2 + 2] [i_5] [i_3] [i_6] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)0))))) != ((-(min((arr_10 [i_3] [i_4] [i_3] [i_3]), (arr_9 [i_2])))))));
                                var_19 = ((/* implicit */signed char) (-(((((/* implicit */int) min((arr_18 [i_2] [3U] [i_4 - 1] [i_3] [i_6]), (((/* implicit */unsigned short) var_12))))) + (((/* implicit */int) (unsigned short)65526))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((unsigned int) (((((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))) - (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (unsigned short)6))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967267U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65527)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : ((-(var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))) : ((-(((var_15) - (((/* implicit */unsigned long long int) var_10))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
    {
        arr_24 [i_7] [i_7] = (unsigned short)65535;
        /* LoopNest 3 */
        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (unsigned int i_9 = 1; i_9 < 23; i_9 += 3) 
            {
                for (unsigned short i_10 = 4; i_10 < 23; i_10 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) arr_26 [i_7]);
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (_Bool)1)))))));
                            arr_36 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] [i_10] [i_11] [i_10] [i_9] = ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_33 [i_11] [i_9] [i_9] [i_7] [i_7]))));
                        }
                        arr_37 [i_7] [i_7] [i_7] [i_9] = ((/* implicit */_Bool) ((unsigned short) arr_29 [(unsigned short)18] [i_8] [i_9 + 1] [i_10 - 2]));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 24; i_12 += 3) /* same iter space */
                        {
                            var_24 ^= ((/* implicit */int) ((arr_30 [i_7] [i_7]) + (arr_30 [i_9] [i_10 - 3])));
                            var_25 = ((/* implicit */unsigned char) ((signed char) arr_31 [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9]));
                            arr_40 [i_7] [i_7] [i_9] [i_10] [i_9] = ((/* implicit */unsigned int) var_13);
                            var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)11))) <= (var_5))))));
                        }
                        for (signed char i_13 = 0; i_13 < 24; i_13 += 3) /* same iter space */
                        {
                            var_27 = ((/* implicit */_Bool) ((unsigned char) arr_43 [i_7] [i_7] [i_7] [i_9] [i_7]));
                            arr_44 [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_9] [i_9 - 1] [i_10 - 3] [i_9 - 1] [i_10 + 1] [i_10 - 2])) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                        }
                    }
                } 
            } 
        } 
    }
}
