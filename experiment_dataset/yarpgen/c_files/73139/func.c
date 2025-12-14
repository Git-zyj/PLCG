/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73139
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
    var_19 = ((/* implicit */unsigned char) ((min((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))), ((-(var_14))))) > (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_11)))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                for (signed char i_3 = 4; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_3);
                        arr_13 [i_3 - 2] [i_1] [7LL] [i_1] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((arr_3 [i_0]) ? (((/* implicit */int) (short)-388)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_3 - 1] [i_1] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_9 [i_1] [i_1] [(_Bool)1] [i_3])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned short)65024))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            for (unsigned char i_5 = 3; i_5 < 13; i_5 += 4) 
            {
                for (unsigned char i_6 = 2; i_6 < 15; i_6 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
                        {
                            arr_24 [15ULL] [15ULL] [i_4] [i_6] [15ULL] [(signed char)13] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6 + 2] [i_7] [i_6 + 2] [i_7])) ? (arr_11 [i_6] [i_7] [i_7] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)381))) <= (-8378374422512976305LL))))))))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) : (((((/* implicit */_Bool) (short)-512)) ? (201326592U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)512))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23417)))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) /* same iter space */
                        {
                            arr_30 [i_0] [2LL] [i_5 + 4] [(_Bool)0] [i_6] [i_5 + 4] [i_8] = ((long long int) 2610365631306809881LL);
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5 - 3] [i_4] [i_6 + 1] [i_4])) ? (((/* implicit */int) (!(((/* implicit */_Bool) -2507938540792198178LL))))) : (((/* implicit */int) var_15))));
                            arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) /* same iter space */
                        {
                            arr_35 [i_0] [i_4] [i_0] [(_Bool)1] [i_6] [i_6] [i_0] = ((/* implicit */signed char) min((arr_11 [i_6] [i_4] [i_6] [i_4]), (((/* implicit */long long int) var_5))));
                            arr_36 [14] [i_0] [i_5 - 3] [i_0] [i_0] = ((((/* implicit */_Bool) (~(min((var_6), (((/* implicit */unsigned long long int) (unsigned char)28))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)512))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_0])))))))) : (((/* implicit */int) ((unsigned short) 7801171501458724898LL))));
                            arr_37 [i_9] [8ULL] [0LL] [i_4] [0LL] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_4] [i_4] [i_5])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_13))))) || (((/* implicit */_Bool) (signed char)28))))), ((~((+(((/* implicit */int) (unsigned short)0))))))));
                            arr_38 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(var_3)));
                        }
                        arr_39 [i_5] [i_5] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((var_16) >= (arr_33 [9LL] [9LL] [i_5 + 4] [9LL] [i_0])))) : (((/* implicit */int) min((arr_9 [i_4] [i_4] [i_5] [(unsigned short)16]), (((/* implicit */unsigned char) var_13))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            arr_42 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) var_18))) == ((~(arr_8 [i_0] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) (-((-(((/* implicit */int) arr_6 [i_0])))))))));
            arr_43 [i_10] [(signed char)8] = arr_10 [i_0] [i_10] [i_0] [i_10] [i_10] [i_10];
        }
    }
}
