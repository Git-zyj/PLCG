/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92429
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
    var_13 = var_1;
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) min((var_14), ((~((+((~(arr_0 [i_0])))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_1])));
            var_16 = ((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0]));
        }
        var_17 *= ((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) >= (arr_3 [i_0] [i_0])))), (var_3)));
    }
    for (long long int i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */unsigned long long int) var_0);
        arr_9 [i_2] [i_2] = arr_2 [i_2];
        arr_10 [i_2] = ((/* implicit */int) ((long long int) (!(((/* implicit */_Bool) arr_5 [i_2] [i_2])))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12)))))));
        var_19 = ((/* implicit */signed char) arr_12 [i_3 + 1]);
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_11 [i_4]))));
        var_21 = ((/* implicit */unsigned long long int) ((long long int) ((long long int) 98304)));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-(0))))));
    }
    var_23 += ((/* implicit */unsigned short) var_10);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_5 = 3; i_5 < 9; i_5 += 3) /* same iter space */
    {
        var_24 -= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        var_25 = ((/* implicit */unsigned long long int) (-(-5287160207771635443LL)));
        arr_19 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_5] [i_5 - 1])) ? (arr_3 [i_5 + 1] [i_5 + 1]) : (((/* implicit */unsigned long long int) arr_13 [i_5 - 2]))));
        arr_20 [i_5] = ((/* implicit */signed char) (+(arr_18 [i_5 + 1])));
        var_26 ^= 10;
    }
    for (long long int i_6 = 3; i_6 < 9; i_6 += 3) /* same iter space */
    {
        arr_23 [i_6] [i_6 - 3] = ((/* implicit */int) ((0) > (-10)));
        /* LoopSeq 4 */
        for (long long int i_7 = 4; i_7 < 8; i_7 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 4; i_8 < 9; i_8 += 4) 
            {
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) (~(10))))));
                arr_31 [i_6 - 1] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(9))))));
                arr_32 [i_6] [i_7] [i_6] = ((/* implicit */long long int) (~(((int) 3407976047026485078LL))));
            }
            var_28 *= ((/* implicit */unsigned long long int) var_5);
            var_29 = ((/* implicit */int) min((((unsigned long long int) arr_3 [i_7 - 1] [i_7])), (((((/* implicit */_Bool) var_1)) ? (arr_3 [i_7 - 4] [i_7]) : (arr_3 [i_7 - 4] [i_7 + 1])))));
        }
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 3) 
        {
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_5 [i_6 - 2] [i_9])))))));
            var_31 = ((/* implicit */unsigned char) ((int) var_10));
            arr_35 [i_6 + 1] [i_6] [i_6] = arr_14 [i_9];
            var_32 = ((/* implicit */int) arr_26 [i_6 - 2] [i_6] [i_6]);
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_5 [i_6 + 1] [i_10])) ? (((/* implicit */int) arr_5 [i_10] [i_6 - 3])) : (((/* implicit */int) arr_5 [i_10] [i_6 - 2]))))));
            arr_39 [i_6] = ((/* implicit */unsigned long long int) var_1);
            var_34 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_11 [i_6 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_6] [i_10] [i_10]))) : (arr_14 [i_6])))) ? (((long long int) arr_24 [i_6 - 3] [i_6 - 3])) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_10)))));
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            arr_44 [i_11] [i_6] = ((/* implicit */unsigned short) ((signed char) ((unsigned long long int) 10)));
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((unsigned long long int) var_2))));
            /* LoopSeq 2 */
            for (signed char i_12 = 0; i_12 < 10; i_12 += 1) 
            {
                var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) var_2))));
                var_37 = ((/* implicit */unsigned long long int) arr_4 [i_6] [i_11]);
                arr_48 [i_6] [i_6] = (-(17984813666028131819ULL));
            }
            for (int i_13 = 0; i_13 < 10; i_13 += 4) 
            {
                var_38 = ((/* implicit */unsigned int) ((signed char) arr_51 [i_6] [i_6 + 1] [i_6 - 3] [i_11]));
                var_39 = ((/* implicit */signed char) ((unsigned char) arr_7 [i_6 - 1]));
            }
        }
        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((int) (-(5287160207771635442LL)))))));
    }
}
