/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8051
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) 5408472225367696666ULL)) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_3)))))))))))));
    var_16 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) ((13038271848341854949ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35)))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_3 [i_0] [i_0]), (arr_3 [i_0] [i_0]))))));
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((signed char) (unsigned char)33)))));
        var_19 = ((/* implicit */short) (((((!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))) ? (max((((/* implicit */unsigned long long int) var_3)), (13038271848341854935ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)124)))))))));
        var_20 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned char)194)), (13038271848341854940ULL)));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = max((((((13969444529051685356ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2])) : (((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0])) / (6662615183148844653ULL))))), (((/* implicit */unsigned long long int) var_0)));
                    arr_10 [i_0] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) (unsigned char)100)), (var_4))) >> (((((/* implicit */int) var_10)) - (63828)))));
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_7 [i_1]))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)-2949))) ? (((/* implicit */int) min((var_3), (arr_1 [i_1])))) : (((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */int) arr_6 [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) var_7))))))) ? ((((!(((/* implicit */_Bool) var_8)))) ? (((unsigned long long int) (unsigned char)145)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)155))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2])))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    for (signed char i_7 = 2; i_7 < 6; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((unsigned long long int) ((long long int) arr_24 [i_7 + 2] [i_7 + 2] [i_7 - 2] [i_7 - 1] [i_7 + 2]))))));
                            var_24 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))));
                            var_25 ^= ((/* implicit */unsigned char) arr_20 [i_3] [i_4] [i_5] [i_3]);
                            var_26 *= ((/* implicit */unsigned short) max((6865677146836766724LL), (((/* implicit */long long int) arr_14 [i_7] [i_4]))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) var_1);
                var_28 = ((/* implicit */unsigned long long int) arr_1 [i_4]);
            }
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) (signed char)80)))));
                            arr_34 [i_4] [i_8] [i_9] = (_Bool)1;
                        }
                    } 
                } 
                var_30 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_20 [i_3] [i_3] [i_4] [i_4]) ? (((/* implicit */int) (unsigned char)155)) : (((/* implicit */int) var_9)))))));
            }
            var_31 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (6662615183148844650ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3] [i_3] [i_4] [i_4]))))) * (((/* implicit */unsigned long long int) var_4))));
        }
        arr_35 [i_3] [i_3] = ((/* implicit */_Bool) var_5);
    }
    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            arr_40 [i_11] [i_12] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)7))))), (((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (6662615183148844634ULL)))));
            var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_12]))))) ? (((((/* implicit */_Bool) arr_8 [i_11] [i_12] [i_11])) ? (((/* implicit */int) (signed char)-94)) : (((/* implicit */int) (unsigned short)23852)))) : (((/* implicit */int) ((_Bool) (unsigned char)139))))) < (((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? ((+(((/* implicit */int) var_12)))) : (arr_32 [i_12] [i_12] [i_11] [i_11] [i_11])))));
            var_33 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_11] [i_12] [8ULL] [i_11] [i_11]))) > (4406419971475310873ULL)))))));
        }
        var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) (unsigned short)23852))));
        var_35 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_28 [i_11] [i_11]))))), (arr_4 [i_11])));
        arr_41 [i_11] = ((/* implicit */unsigned long long int) ((int) ((signed char) ((((/* implicit */_Bool) 6662615183148844653ULL)) ? (13038271848341854949ULL) : (arr_15 [i_11])))));
    }
    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned long long int) (~((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-33))) : (108599078878398263LL)))));
        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13038271848341854948ULL)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) ((signed char) 295219709U))) ? (5645218485570242608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7541)))))));
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)31070)) : (((/* implicit */int) (unsigned char)166))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_13] [i_13] [i_13] [i_13] [i_13])) && (((/* implicit */_Bool) var_13))))))))));
    }
    var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((_Bool) 9223372036854775807LL)) ? (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 6132802818502043760ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)30554)))) : (((/* implicit */int) (signed char)-45)))) : (((/* implicit */int) (unsigned char)166)))))));
}
