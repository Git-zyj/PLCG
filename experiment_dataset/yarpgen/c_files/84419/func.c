/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84419
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)53)))))));
    }
    for (signed char i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        var_14 = ((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (min((((/* implicit */long long int) arr_5 [i_1 - 1])), (6856290847507562173LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1 - 1]))))));
        var_15 = ((/* implicit */_Bool) arr_4 [i_1] [i_1]);
        var_16 = ((/* implicit */int) ((_Bool) (short)-22775));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_17 &= ((/* implicit */int) var_9);
                        arr_21 [i_2] [i_2] [i_2] [i_4] [i_5] = ((/* implicit */unsigned int) (_Bool)1);
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) ((arr_13 [i_2] [i_3]) * (arr_13 [i_2] [i_2])));
            var_19 = ((/* implicit */short) ((_Bool) var_3));
            arr_22 [i_2] [i_3] = arr_17 [(unsigned char)20];
        }
        for (int i_6 = 4; i_6 < 21; i_6 += 2) 
        {
            var_20 = ((/* implicit */long long int) (((~(arr_11 [i_2] [i_6]))) != (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_2] [i_6] [i_6] [i_2])))));
            var_21 = ((/* implicit */signed char) (~(((/* implicit */int) ((var_12) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            var_22 = ((/* implicit */signed char) arr_15 [i_2] [i_6 - 1]);
        }
        arr_27 [i_2] [i_2] = var_2;
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    for (int i_10 = 0; i_10 < 22; i_10 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) arr_36 [i_2] [i_7] [i_8] [i_9] [(signed char)9]);
                            arr_39 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) arr_32 [i_8]);
                            var_24 = (!(((/* implicit */_Bool) (short)22775)));
                            var_25 |= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-32)))) >= (((/* implicit */int) ((signed char) (unsigned short)3)))));
                            arr_40 [i_2] [i_8] [i_8] [i_7] [i_7] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((-1720710919) == (((/* implicit */int) var_8))))) : (((/* implicit */int) ((arr_31 [i_8] [i_7] [i_7]) < (((/* implicit */unsigned long long int) -643860809014287195LL)))))));
                        }
                    } 
                } 
            } 
            arr_41 [i_2] [21U] |= ((/* implicit */short) (-(arr_23 [i_2])));
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_9))));
            arr_42 [i_2] [i_2] [i_2] = ((/* implicit */long long int) (~(arr_17 [i_7])));
        }
        for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            var_27 = ((unsigned long long int) (+(12296603010033305533ULL)));
            var_28 = ((/* implicit */long long int) ((signed char) arr_17 [i_11]));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)73))) > ((((_Bool)1) ? (1729086026282196527LL) : (((/* implicit */long long int) ((/* implicit */int) (short)22774)))))));
            arr_45 [i_2] [10U] [i_2] |= ((/* implicit */_Bool) (unsigned short)65247);
            var_30 = ((/* implicit */unsigned short) (-(2438884657383370937LL)));
        }
        var_31 = ((/* implicit */short) (-(((int) 2686225506577923940LL))));
    }
    /* vectorizable */
    for (unsigned char i_12 = 1; i_12 < 21; i_12 += 2) 
    {
        arr_49 [i_12] = ((/* implicit */unsigned long long int) 961196807);
        var_32 = ((/* implicit */int) 170466616U);
    }
    var_33 &= ((/* implicit */unsigned short) var_0);
}
