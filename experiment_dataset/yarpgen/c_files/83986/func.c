/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83986
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
    var_11 = ((/* implicit */int) max(((unsigned char)106), (((/* implicit */unsigned char) (signed char)-64))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-720117610691592974LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25294)))))) ? (((((/* implicit */_Bool) (unsigned char)77)) ? (1618097914357134925ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43881))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) % (arr_0 [i_0]))))));
        var_13 = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_1] [i_2] [i_2] = (-(((/* implicit */int) (unsigned short)43876)));
                    var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 140703128616960ULL)) ? (-1014014708) : (((/* implicit */int) (unsigned short)65024))))) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_1 [i_0])));
                    var_15 = ((/* implicit */signed char) arr_2 [i_0] [i_1]);
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 23; i_5 += 4) 
            {
                for (int i_6 = 2; i_6 < 19; i_6 += 3) 
                {
                    {
                        var_16 = ((/* implicit */signed char) ((arr_14 [i_4] [i_5] [i_6 + 1] [i_6 + 3]) > (((/* implicit */int) arr_11 [i_6 - 1]))));
                        arr_18 [i_3] [i_3] [1LL] [i_3] = ((/* implicit */unsigned char) var_8);
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_0 [i_6 + 2]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    {
                        arr_29 [i_3] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_3] [i_7] [9LL] [9])) ? (arr_3 [i_3] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_17 [i_3] [i_3] [i_7] [(unsigned short)12] [i_9] [i_9]))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            var_18 = (-(arr_21 [i_3] [1LL] [i_3]));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_3] [i_7])) ? (((/* implicit */int) arr_9 [i_9] [i_9])) : (var_8))))));
                        }
                        arr_32 [i_3] [i_3] = ((/* implicit */int) (-(arr_27 [i_3])));
                    }
                } 
            } 
        } 
    }
}
