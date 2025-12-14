/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87924
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
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18865))))) : (((/* implicit */unsigned int) var_2))))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 2988541249U)) ? (var_15) : (var_13))))) : (((((/* implicit */_Bool) (~(-118951861)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4)))) : (((((/* implicit */_Bool) var_6)) ? (6379911019432332173ULL) : (((/* implicit */unsigned long long int) var_10)))))))))));
    var_18 = ((/* implicit */long long int) var_15);
    var_19 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 13839678830779458475ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_13)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) var_1))))))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) -2445426280593544435LL)))))) ? (((/* implicit */int) ((signed char) var_10))) : (((((/* implicit */_Bool) ((unsigned int) arr_6 [i_0]))) ? (((/* implicit */int) ((signed char) 11951067491288685910ULL))) : (((/* implicit */int) (unsigned char)225))))));
                        arr_11 [i_1] [(unsigned short)7] [i_1] [i_1] [21U] = ((/* implicit */unsigned short) (-(((long long int) (unsigned short)24856))));
                        arr_12 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_16)))) ? ((-(arr_5 [i_1 + 1] [i_1]))) : (((((/* implicit */_Bool) (short)18867)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))));
        var_23 = ((/* implicit */long long int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_4] [i_4] [22LL])))));
    }
    for (int i_5 = 1; i_5 < 12; i_5 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            arr_21 [i_5] [i_6] = ((long long int) arr_16 [i_5 + 1]);
            arr_22 [i_5 + 1] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_5 + 1])) ? (arr_6 [i_5 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        }
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
            {
                var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_5 + 2])) ? (((/* implicit */int) (unsigned char)46)) : (var_10)));
                /* LoopNest 2 */
                for (unsigned short i_9 = 2; i_9 < 10; i_9 += 3) 
                {
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_4 [i_10] [(_Bool)1] [i_8]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1662836539U)) ? (((/* implicit */int) arr_14 [i_8] [i_8])) : (((/* implicit */int) arr_13 [5ULL] [5]))))) : (-6195197983806572188LL)));
                            var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_24 [i_5 + 1] [i_5 + 1])) : (((/* implicit */int) arr_24 [i_5 + 2] [i_8]))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
            {
                arr_37 [i_11] [(unsigned short)9] [5U] [(signed char)8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4499053598594123210LL)) ? (arr_2 [i_5 + 2]) : (arr_2 [i_5 - 1])))) ? (((unsigned long long int) ((arr_33 [i_11]) ? (((/* implicit */int) arr_33 [i_11])) : (((/* implicit */int) arr_36 [13] [(short)12] [6LL] [6LL]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_9)) : (arr_27 [i_5 + 2] [(unsigned char)3] [i_5 - 1]))))));
                arr_38 [i_11] [i_11] [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) (signed char)-69)))));
                arr_39 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 644725565)) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) (unsigned short)37071))))) ? (((/* implicit */long long int) (((_Bool)1) ? (arr_4 [i_11] [i_5 + 1] [i_11]) : (((/* implicit */unsigned int) 314569641))))) : (((((/* implicit */_Bool) arr_4 [i_11] [i_5 - 1] [i_11])) ? ((-9223372036854775807LL - 1LL)) : (var_5)))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [(signed char)0] [i_7] [i_5] [13])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_5] [i_5] [i_5] [i_5])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (signed char)15)))) : ((-(4339103744139918598ULL))))));
                var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                arr_42 [i_12] [i_12] [i_12] [i_5] = ((/* implicit */_Bool) ((signed char) (-((-(((/* implicit */int) arr_24 [i_5 - 1] [i_7])))))));
            }
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 1) 
            {
                var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_34 [i_5 + 2] [i_7] [i_5 - 1] [i_7])))))));
                arr_46 [7U] [i_7] [i_13] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_10)) : (var_13));
                arr_47 [i_5] [i_7] [i_7] [i_13] = ((/* implicit */int) ((long long int) var_12));
                var_30 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_7])))))));
            }
            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) ((((_Bool) var_2)) ? ((~(arr_7 [i_7] [(short)2] [i_5]))) : (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */long long int) var_8)) : (9223372036854775807LL)))))))));
        }
        var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65530))))) ? (((/* implicit */int) ((_Bool) arr_35 [i_5]))) : (2122749795)))) ? ((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_36 [i_5] [8] [i_5] [i_5 + 2])) : (((/* implicit */int) arr_36 [i_5] [i_5] [10U] [i_5])))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_5] [i_5 + 1] [i_5] [i_5])))))))));
    }
    var_33 = ((/* implicit */unsigned long long int) var_16);
}
