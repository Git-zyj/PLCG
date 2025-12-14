/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91909
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            var_14 ^= ((/* implicit */_Bool) (unsigned short)59409);
            var_15 -= ((/* implicit */signed char) (unsigned char)68);
        }
        for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
        {
            var_16 = (unsigned char)223;
            arr_7 [i_0] [i_0] [i_0] = (unsigned char)32;
        }
        for (signed char i_3 = 4; i_3 < 17; i_3 += 4) 
        {
            var_17 += ((/* implicit */unsigned char) arr_0 [i_0]);
            var_18 ^= ((/* implicit */unsigned int) ((arr_3 [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)-126)))));
        }
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_3 [i_0] [i_0]))));
        var_20 = ((/* implicit */short) arr_2 [i_0]);
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned int) arr_2 [i_4]);
        arr_15 [i_4] = ((/* implicit */long long int) (+(arr_8 [i_4])));
    }
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((var_2), (((/* implicit */long long int) var_9)))))));
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (signed char)-109))));
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
    {
        var_23 = ((/* implicit */signed char) 105663499395781295LL);
        var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5]))) == (max((0LL), (((/* implicit */long long int) arr_16 [i_5])))))))));
        arr_18 [i_5] = ((/* implicit */short) (signed char)(-127 - 1));
    }
    /* LoopSeq 3 */
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 3; i_7 < 20; i_7 += 1) 
        {
            for (unsigned char i_8 = 1; i_8 < 21; i_8 += 4) 
            {
                {
                    arr_26 [i_6] [i_7] [i_6] = ((/* implicit */int) arr_17 [i_6]);
                    var_25 = ((/* implicit */long long int) (_Bool)1);
                }
            } 
        } 
        var_26 = ((/* implicit */long long int) arr_19 [i_6]);
        var_27 = ((((/* implicit */int) (unsigned short)41110)) <= (((/* implicit */int) (unsigned char)67)));
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        arr_31 [i_9] = (+(((/* implicit */int) (!(((/* implicit */_Bool) 2146927110U))))));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_21 [i_9] [i_9] [i_9])) > (8331223890579381001LL)));
        var_29 = ((/* implicit */signed char) (+(arr_23 [i_9] [i_9] [i_9])));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        arr_36 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -661284178)) ? (arr_10 [i_10]) : (arr_10 [i_10])));
        arr_37 [i_10] = ((/* implicit */unsigned int) (signed char)109);
        var_30 = ((/* implicit */_Bool) arr_11 [i_10] [i_10]);
    }
}
