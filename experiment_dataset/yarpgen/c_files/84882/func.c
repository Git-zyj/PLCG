/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84882
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */short) (+(((/* implicit */int) var_4))));
        arr_3 [i_0] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (var_8));
        var_11 = ((/* implicit */unsigned long long int) ((var_0) >> (((((/* implicit */int) var_4)) - (2177)))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (var_7)));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (!(var_10)));
        }
        for (unsigned short i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 24; i_3 += 3) 
            {
                for (long long int i_4 = 1; i_4 < 22; i_4 += 3) 
                {
                    {
                        var_13 = ((/* implicit */short) ((((/* implicit */long long int) 1410921981U)) <= (4985241767293958367LL)));
                        arr_16 [i_0] [(_Bool)1] [i_3] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
                        arr_17 [i_0] [22LL] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) > (var_2)));
                    }
                } 
            } 
            var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
            var_15 |= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) var_3)) <= (((/* implicit */int) var_9)))))));
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
            {
                arr_20 [i_2] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((var_0) != (var_0))))));
                arr_21 [(unsigned char)24] &= ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (~(var_7))))));
            }
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (short i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    var_17 = ((/* implicit */_Bool) var_4);
                    arr_28 [i_2] [i_2] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))));
                    arr_29 [i_2] [i_2] [i_6] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 219274098U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)47))) : (3191587681392713057ULL)));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_1))))));
                }
                for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 3) 
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        arr_35 [i_0] [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (var_0)))) : (var_7)));
                        arr_36 [i_0] [i_0] [(signed char)6] [i_2] [(signed char)6] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_10) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_3))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_3))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_8))))));
                        arr_39 [i_2] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_1)) : ((+(var_7))));
                    }
                    arr_40 [i_2] = ((/* implicit */short) var_10);
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(((/* implicit */int) var_3)))))));
                }
                for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    arr_44 [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((-(var_7))) : ((+(var_8)))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(var_1))))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    arr_47 [i_12] [i_6 + 1] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (var_2)));
                    arr_48 [i_0] [i_2] [i_6] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) && (((/* implicit */_Bool) ((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                    var_24 = ((/* implicit */unsigned short) var_3);
                    var_25 = ((var_2) - (var_2));
                }
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8)));
            }
            /* LoopSeq 2 */
            for (unsigned long long int i_13 = 2; i_13 < 21; i_13 += 3) 
            {
                var_27 -= ((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))));
                var_28 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_4))));
            }
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                arr_55 [i_0] [i_2 + 1] [i_14 + 1] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
                var_29 = ((/* implicit */signed char) (+(var_8)));
                var_30 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5)))))));
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_8))))));
            }
        }
        for (int i_15 = 1; i_15 < 22; i_15 += 3) 
        {
            var_32 = ((/* implicit */unsigned short) ((var_8) ^ (var_8)));
            arr_60 [i_0] [i_15] = ((/* implicit */_Bool) (-(((/* implicit */int) var_4))));
            var_33 = ((/* implicit */unsigned short) ((var_10) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))));
        }
    }
    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((-(min((((/* implicit */unsigned long long int) var_3)), (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
    var_35 = ((/* implicit */unsigned short) var_1);
    var_36 += ((/* implicit */unsigned char) var_7);
}
