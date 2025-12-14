/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62923
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) ((short) arr_1 [i_0]));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_1 [(unsigned short)12]);
    }
    for (int i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) 5710514298317030022ULL);
        var_14 = ((/* implicit */short) ((unsigned short) var_6));
        var_15 ^= ((/* implicit */signed char) arr_3 [i_1 - 1] [i_1 + 1]);
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) min((var_0), (var_0)))))));
            arr_9 [i_1] = ((/* implicit */unsigned short) (_Bool)1);
            arr_10 [i_1] [i_2] = ((/* implicit */unsigned short) (unsigned char)16);
        }
        for (signed char i_3 = 4; i_3 < 23; i_3 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 2; i_4 < 23; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 3) 
                    {
                        {
                            arr_20 [i_1] [i_3 - 3] [i_4 + 1] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_6])) || (((/* implicit */_Bool) 12903457409133084943ULL))))) < (((/* implicit */int) min((((/* implicit */short) arr_14 [i_1])), (arr_13 [i_1] [22LL] [i_5]))))))) : ((~(((/* implicit */int) (_Bool)0))))));
                            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((2103942868773008760ULL), (((/* implicit */unsigned long long int) var_3)))))));
                            var_17 = min((min((((/* implicit */unsigned long long int) (unsigned char)228)), (((((/* implicit */_Bool) (signed char)118)) ? (10907984063935490412ULL) : (arr_16 [i_6]))))), (((/* implicit */unsigned long long int) (signed char)-55)));
                            var_18 = ((/* implicit */long long int) arr_19 [i_1 - 1] [(_Bool)1] [(_Bool)1] [i_1 - 1] [(_Bool)1] [i_1 - 1] [i_1]);
                        }
                    } 
                } 
            } 
            arr_21 [i_1] = ((/* implicit */unsigned short) var_4);
        }
        /* vectorizable */
        for (signed char i_7 = 4; i_7 < 23; i_7 += 2) /* same iter space */
        {
            arr_24 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_16 [i_1]) | (arr_11 [i_1] [i_1])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_6 [i_7 - 2]))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_7] [i_7 + 1] [i_7] [i_1 - 1] [i_1 - 1] [i_1] [i_1])) + (((/* implicit */int) arr_19 [i_7] [i_7 + 1] [7ULL] [i_1 - 1] [i_1] [(short)1] [i_1]))));
            arr_25 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_13 [i_1] [i_1] [i_1]))));
        }
    }
    for (unsigned short i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        arr_28 [i_8] = ((/* implicit */unsigned int) (short)8338);
        /* LoopNest 2 */
        for (unsigned short i_9 = 1; i_9 < 23; i_9 += 4) 
        {
            for (unsigned short i_10 = 2; i_10 < 23; i_10 += 2) 
            {
                {
                    arr_37 [i_8] [i_9] [i_10] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (16839314637778512844ULL));
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((short) var_5)))));
                }
            } 
        } 
    }
    for (short i_11 = 0; i_11 < 25; i_11 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)44900))) ? (((/* implicit */int) arr_41 [i_11] [i_11])) : (((/* implicit */int) (_Bool)1))))));
        arr_42 [i_11] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
    }
    var_22 = ((/* implicit */signed char) var_6);
    var_23 = ((/* implicit */unsigned long long int) var_10);
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((5543286664576466655ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))))));
    var_25 |= ((/* implicit */signed char) var_6);
}
