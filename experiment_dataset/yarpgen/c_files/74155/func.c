/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74155
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
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((int) (~(8873186299242609641LL))))));
                    var_20 ^= ((/* implicit */signed char) ((short) (~(arr_6 [i_1] [i_2]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) (((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((8873186299242609640LL) - (8873186299242609640LL)))));
    var_22 = ((/* implicit */unsigned char) (+((+(((((/* implicit */_Bool) var_9)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (short)10565)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8873186299242609641LL)) ? (-8873186299242609649LL) : (-8873186299242609650LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [8]))) : (((-4945740153382097050LL) / (((/* implicit */long long int) arr_13 [(signed char)8] [i_3])))))))));
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (short i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                {
                    var_24 -= ((/* implicit */unsigned short) (+(4945740153382097058LL)));
                    arr_21 [2] [i_4] [i_4] [i_3] &= ((/* implicit */short) (-(((/* implicit */int) arr_20 [(unsigned short)2] [i_5] [i_4] [i_3]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
        {
            arr_27 [i_6] [i_6] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_25 [i_7]))));
            var_25 = ((/* implicit */signed char) arr_23 [i_6]);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_26 = ((/* implicit */_Bool) max((var_26), ((((~(8873186299242609659LL))) >= (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_8])))))))));
            arr_31 [i_6] [i_6] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) (short)-31654))));
            var_27 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_25 [i_6]))));
        }
        for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
        {
            var_28 = ((/* implicit */long long int) ((int) (signed char)(-127 - 1)));
            var_29 = ((/* implicit */unsigned int) max((var_29), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) (short)32649)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118))) : (669902379U)))))));
            arr_34 [i_9] |= ((/* implicit */signed char) ((short) (unsigned short)0));
            arr_35 [i_6] [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(arr_32 [i_9] [(signed char)4]))))));
            var_30 = ((/* implicit */unsigned char) (_Bool)1);
        }
        var_31 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_6])) || (((/* implicit */_Bool) arr_22 [i_6] [i_6]))));
        arr_36 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-31658)) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (short i_11 = 2; i_11 < 16; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 19; i_12 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 19; i_13 += 2) 
                    {
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (((-(var_1))) / (8873186299242609641LL))))));
                        var_33 += ((/* implicit */unsigned int) (signed char)-111);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 19; i_14 += 2) 
                    {
                        for (short i_15 = 0; i_15 < 19; i_15 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (+(var_7))))));
                                var_35 = ((/* implicit */int) (~(((unsigned long long int) (unsigned char)17))));
                                var_36 = arr_47 [(_Bool)1] [i_11 - 2] [i_10] [i_11 - 2] [(unsigned short)6] [i_10];
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_52 [i_10] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-61))));
        var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) 8873186299242609659LL))));
        var_38 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-1558)) && (((/* implicit */_Bool) arr_51 [i_10])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) < (arr_41 [i_10] [i_10] [2ULL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_10])))))));
        arr_53 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))) : (var_16)))) ? ((~(var_1))) : (((/* implicit */long long int) var_11))));
    }
}
