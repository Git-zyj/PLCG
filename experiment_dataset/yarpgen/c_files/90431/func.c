/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90431
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
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_10))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    {
                        arr_10 [i_3] [i_3] [i_3] [i_2] [i_3] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) -1952014969920518397LL)) ? (((((/* implicit */int) arr_7 [(unsigned short)12] [i_1])) >> (((((/* implicit */int) var_10)) + (45))))) : (-818084731)));
                        arr_11 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_2] [i_0]))) > (arr_1 [i_3])));
                        arr_12 [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) var_1))) + (var_14)))));
                    }
                } 
            } 
        }
        arr_13 [17LL] = ((/* implicit */unsigned long long int) arr_6 [i_0] [14LL] [i_0]);
        /* LoopSeq 2 */
        for (short i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            arr_16 [i_0] |= ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_4 + 2] [i_4 + 2])))));
            var_17 = ((/* implicit */long long int) (+(((/* implicit */int) var_8))));
        }
        for (int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    {
                        arr_23 [i_0] [i_0] [i_5] [i_5] [i_6] [i_7] = ((/* implicit */long long int) var_12);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 2) 
                        {
                            var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [i_0] [i_5] [i_0]))));
                            arr_26 [(unsigned short)3] [(unsigned short)3] [i_6] [i_6] = var_8;
                        }
                        for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 1) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-7)) || (((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                            var_20 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) 11603862137673034515ULL)))));
                            arr_30 [i_0] [i_5] [i_6] [i_0] [20ULL] = ((/* implicit */long long int) max(((short)-4568), (((/* implicit */short) ((_Bool) (~(arr_17 [i_0] [i_9])))))));
                            var_21 = ((/* implicit */unsigned char) max((var_21), ((unsigned char)140)));
                            arr_31 [i_0] [i_0] [(unsigned short)9] [i_0] [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (short)-4568))))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            arr_36 [i_0] [i_0] [i_6] &= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (unsigned char)255))) && (((/* implicit */_Bool) 1952014969920518396LL)))))));
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~(208044991985385372ULL))))));
                            var_23 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_20 [i_10] [i_6] [2LL] [i_0])) && (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5)))))) ? ((~(((/* implicit */int) arr_19 [18U] [i_6] [6LL])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_6])))))));
                        }
                        for (long long int i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] = var_0;
                            var_24 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) ((((/* implicit */int) var_10)) >= (((/* implicit */int) arr_15 [i_6] [i_5])))))))));
                        }
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6756))) / (4324677320396262293ULL))))) ? (var_3) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0] [i_5]))) + ((-(var_5))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    {
                        arr_47 [i_0] [i_12] [i_5] [i_12] [i_12] = ((((/* implicit */unsigned int) (-(var_13)))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ^ (arr_18 [i_0]))));
                        arr_48 [i_12] [i_5] [i_5] [i_12] [i_13] = ((/* implicit */unsigned char) var_5);
                    }
                } 
            } 
            arr_49 [i_0] [(signed char)18] = ((/* implicit */unsigned long long int) arr_37 [i_5] [i_0] [i_0] [i_0] [i_0]);
        }
        var_26 = ((/* implicit */signed char) var_6);
    }
    var_27 = ((/* implicit */unsigned long long int) (unsigned short)56825);
    /* LoopNest 2 */
    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 1) 
    {
        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
        {
            {
                arr_55 [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_28 [i_14] [i_14] [i_14] [9ULL] [i_14])))) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) ((arr_7 [i_15] [i_14]) || (((/* implicit */_Bool) (signed char)2)))))))) ? ((-(((/* implicit */int) ((unsigned char) var_3))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_14] [i_15] [i_15]))))) < ((-(((/* implicit */int) arr_22 [i_14] [i_15])))))))));
                arr_56 [i_14] [i_14] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_15 [i_15] [i_14])) | (((/* implicit */int) arr_15 [i_14] [i_15]))))));
            }
        } 
    } 
    var_28 = ((/* implicit */short) ((unsigned char) 9494826121887523027ULL));
}
