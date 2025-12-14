/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99151
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
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_4 [i_0] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_0 + 1])) ^ (((/* implicit */int) arr_2 [i_0 + 2]))));
        var_10 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) arr_3 [i_0 + 1]))), (var_8)));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 4; i_2 < 18; i_2 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_3 = 1; i_3 < 18; i_3 += 1) 
                {
                    var_11 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (+(min((((((/* implicit */int) (unsigned short)28212)) ^ (((/* implicit */int) (unsigned short)31931)))), (var_4))))))));
                    arr_13 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned long long int) var_6)))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                    {
                        var_13 = ((/* implicit */long long int) ((arr_2 [i_1 + 3]) ? (var_9) : ((+(((/* implicit */int) (unsigned short)33611))))));
                        var_14 |= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_9))) > (((/* implicit */int) ((short) var_4)))))) << (((min((-6961349254823595567LL), (((/* implicit */long long int) var_2)))) + (6961349254823595584LL)))));
                        var_15 = ((/* implicit */int) min(((~(arr_15 [i_1]))), (((/* implicit */unsigned long long int) ((arr_11 [i_0 + 2] [i_1] [i_2 - 2] [i_1] [i_4]) | (arr_11 [i_0 + 1] [i_1 + 1] [i_2] [i_1] [0ULL]))))));
                    }
                    for (int i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        arr_19 [i_5] [i_1] [(short)18] [i_2 + 2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)31931))))), (((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (var_1)))))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)33614)) / (((/* implicit */int) (unsigned short)31905)))))));
                    }
                }
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_6))));
                    arr_22 [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) arr_21 [i_0 + 2] [i_0 + 1] [i_1] [i_1 - 1] [i_2 - 4]))), (min((arr_21 [i_0 - 1] [i_0 - 1] [i_1] [i_1 - 2] [i_2 - 2]), (arr_21 [i_0 + 1] [i_0 - 1] [i_1] [i_1 - 1] [i_2 - 4])))));
                    arr_23 [i_1] = ((/* implicit */unsigned long long int) min(((+(arr_16 [i_2] [i_2 - 1] [i_0 + 2]))), (((((/* implicit */_Bool) var_7)) ? (arr_16 [i_6] [i_2 + 2] [i_0 - 1]) : (((/* implicit */long long int) var_9))))));
                }
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (signed char i_8 = 3; i_8 < 18; i_8 += 3) 
                    {
                        {
                            arr_29 [(unsigned short)14] [i_1] [i_2] [i_2] [i_8] [i_8 + 1] = ((/* implicit */long long int) arr_6 [i_1] [i_7]);
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((arr_7 [i_8] [i_2] [i_1] [i_0]) | (min((var_2), (var_9))))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 3) 
            {
                var_19 &= ((((/* implicit */int) ((unsigned char) (~(var_8))))) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (arr_7 [i_0 - 1] [i_1] [i_1] [5LL]))))) < (((long long int) arr_10 [8]))))));
                var_20 = ((/* implicit */int) min((((/* implicit */long long int) ((arr_0 [i_0 + 1] [i_1]) + (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_1] [(unsigned short)8] [i_0])) != (((/* implicit */int) arr_5 [i_0])))))))), (((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_0] [8ULL] [i_0]))) % (arr_16 [i_0] [i_1] [i_9])))));
                arr_32 [8] [i_1] [8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_28 [i_0 - 1] [i_1] [i_0 - 1] [i_1 + 2] [i_9 - 1]) & (((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_1] [i_1 + 1] [i_9 + 2])))))));
                arr_33 [i_1] [i_1] = ((/* implicit */unsigned short) (+(-2282763915465894723LL)));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_28 [i_0 - 1] [i_0 + 1] [i_1 + 1] [i_1 + 3] [i_1 - 1])))) ? ((~(((((/* implicit */_Bool) arr_9 [10] [i_1] [i_9] [(unsigned char)16])) ? (var_9) : (((/* implicit */int) var_0)))))) : ((~(var_4))))))));
            }
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 20; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    {
                        arr_40 [i_11] [i_11] [i_1] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)33605)), (2282763915465894723LL)))) ? (((/* implicit */unsigned long long int) -192303661)) : ((((!(((/* implicit */_Bool) 1415823772U)))) ? (arr_15 [i_1]) : (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned int) (unsigned short)20169)))))))));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
                        {
                            var_22 *= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1]))))) : (((min((arr_11 [i_12] [i_11] [i_10] [i_11] [i_0]), (((/* implicit */long long int) (_Bool)1)))) / (((/* implicit */long long int) arr_20 [i_0] [i_0 + 2] [i_0 - 1] [18U])))));
                            var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_0 + 2] [i_0 - 1] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 1])) ? (((/* implicit */int) ((signed char) 14ULL))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                            arr_44 [i_1] [i_1] [i_10] [i_11] [i_11] [14] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_10] [i_1] [i_12])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_30 [i_1] [i_1] [i_12])))))) ? (arr_15 [i_1]) : (min((((/* implicit */unsigned long long int) arr_36 [i_1 - 2] [i_1] [17U] [(unsigned char)2])), ((+(10991541477220449134ULL)))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            arr_47 [(unsigned short)12] [i_1 + 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) var_6);
                            arr_48 [i_13] [i_13] [i_13] [i_1] &= ((/* implicit */signed char) arr_38 [i_13]);
                            arr_49 [i_0] [i_1] = ((((/* implicit */_Bool) 6961349254823595536LL)) ? (arr_34 [i_0] [i_0] [i_11]) : (arr_34 [i_13] [i_11] [i_10]));
                        }
                    }
                } 
            } 
            arr_50 [i_1] [i_1 - 2] [i_1] = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_1 + 1] [i_1] [i_1 + 3]))) != (arr_43 [i_1 + 1] [i_1 + 2] [i_1 + 3] [i_1 - 2] [i_1 - 2]))) ? (((/* implicit */int) ((((/* implicit */int) arr_42 [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 2] [i_1 - 2])) < (((/* implicit */int) arr_42 [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 2] [i_1 - 2]))))) : (((arr_25 [i_1 + 1] [i_1] [i_1 + 3]) ? (((/* implicit */int) arr_42 [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_25 [i_1 + 1] [i_1] [i_1 + 3])))));
            var_24 &= ((/* implicit */unsigned long long int) min(((_Bool)1), (((arr_28 [i_1 + 2] [i_1 + 3] [i_0 + 2] [i_0 + 2] [i_0]) >= (((/* implicit */unsigned int) var_2))))));
            /* LoopNest 2 */
            for (int i_14 = 4; i_14 < 19; i_14 += 3) 
            {
                for (long long int i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    {
                        var_25 = ((/* implicit */int) arr_26 [i_15] [i_15] [i_14 - 4] [i_0] [(_Bool)1] [i_0]);
                        arr_56 [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [i_15] = ((/* implicit */unsigned char) 4294967290U);
                        var_26 = ((/* implicit */unsigned int) (unsigned short)20191);
                    }
                } 
            } 
        }
    }
    for (unsigned int i_16 = 1; i_16 < 18; i_16 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((2251799813684224ULL), (((/* implicit */unsigned long long int) 4294967295U))))) ? ((-(((/* implicit */int) arr_5 [i_16 + 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_16 - 1] [(short)10] [(unsigned short)0])))))));
        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_36 [i_16 + 2] [(short)2] [(short)2] [i_16 - 1])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_16] [i_16 + 2] [i_16] [i_16 - 1] [i_16 - 1] [i_16 - 1]))))) + (((/* implicit */unsigned int) var_2))));
    }
    var_29 = ((/* implicit */unsigned short) var_1);
}
