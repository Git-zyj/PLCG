/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55141
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
    var_18 |= ((/* implicit */unsigned char) var_10);
    var_19 += ((/* implicit */unsigned int) var_1);
    var_20 = ((/* implicit */signed char) var_3);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (unsigned short)7777)) % (((/* implicit */int) var_9)))));
        var_22 ^= ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (4826189360251669338ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7777))))) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) (unsigned short)0)))))));
        var_23 = ((/* implicit */int) ((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)57764)), (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (_Bool)1))))))) - (arr_1 [i_0] [i_0])));
        var_24 = max((((int) 8235508031830303655ULL)), (((/* implicit */int) var_10)));
    }
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 20; i_2 += 4) 
        {
            for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        arr_14 [8LL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((8235508031830303655ULL), (((/* implicit */unsigned long long int) arr_5 [i_2]))))) ? (((/* implicit */int) max(((unsigned short)3), ((unsigned short)7777)))) : (((/* implicit */int) max(((signed char)80), ((signed char)-8))))))) ? (min((((int) (unsigned short)65535)), (max((arr_5 [i_3]), (((/* implicit */int) (unsigned short)65531)))))) : (((/* implicit */int) ((_Bool) ((long long int) 2328151087U))))));
                        var_25 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)65522))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (arr_5 [i_1 - 1]) : (((/* implicit */int) (signed char)79)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 - 1] [i_2])))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)3)) / (((((-1037748068) + (2147483647))) << (((((arr_8 [i_1] [(_Bool)1] [8LL]) + (814697313))) - (2)))))));
        var_27 ^= ((/* implicit */signed char) (((((~(-6834699506411125146LL))) & (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)10)) / (((/* implicit */int) var_5))))))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (signed char)89)))))))));
    }
    for (int i_5 = 1; i_5 < 19; i_5 += 3) 
    {
        var_28 = ((/* implicit */int) ((signed char) (unsigned short)14));
        var_29 = ((_Bool) (-(arr_6 [i_5 - 1] [i_5])));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 1; i_6 < 17; i_6 += 4) 
        {
            var_30 = ((/* implicit */short) max(((-(((/* implicit */int) ((var_2) > (var_0)))))), (((((/* implicit */_Bool) max((arr_8 [i_5] [(signed char)15] [17LL]), (((/* implicit */int) (signed char)-75))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [i_6 + 3]))) != (var_0)))) : ((~(((/* implicit */int) var_11))))))));
            var_31 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) (signed char)95)))));
            var_32 = ((/* implicit */int) (((!(((/* implicit */_Bool) 381401505U)))) ? (((arr_18 [i_6 + 3]) ^ (arr_18 [i_6 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)65515), (((/* implicit */unsigned short) (signed char)-96))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 1; i_7 < 19; i_7 += 4) 
            {
                for (unsigned int i_8 = 1; i_8 < 18; i_8 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 3; i_9 < 18; i_9 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) ((unsigned short) (signed char)-74))), (((((/* implicit */_Bool) arr_12 [i_5] [(_Bool)1] [4LL] [i_8] [i_9])) ? (arr_18 [i_9]) : (((/* implicit */unsigned int) -1037748072)))))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))));
                            var_34 = ((/* implicit */signed char) max((max(((+(var_6))), (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) var_11))));
                        }
                        for (int i_10 = 3; i_10 < 19; i_10 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned long long int) (unsigned short)65535);
                            var_36 |= ((/* implicit */long long int) arr_11 [i_5 - 1] [i_7] [i_8 + 1] [i_10 - 2]);
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 20; i_11 += 4) 
                        {
                            arr_32 [i_6] [3ULL] [i_6] [i_7] [i_8] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6 - 1] [i_11])) ? (((arr_0 [i_6 + 1] [i_8]) | (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74)))));
                            var_37 = ((/* implicit */unsigned int) 0LL);
                        }
                        var_38 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */int) arr_4 [(_Bool)1] [i_7] [6LL])) < (((/* implicit */int) arr_4 [i_6 + 2] [i_7] [15])))));
                        /* LoopSeq 3 */
                        for (int i_12 = 2; i_12 < 18; i_12 += 4) 
                        {
                            var_39 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_8 + 2])) ? ((+(((/* implicit */int) (signed char)87)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) <= (1491288738U)))))) | (max((arr_24 [i_12] [i_7 - 1]), (arr_24 [i_5] [i_5 - 1])))));
                            var_40 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */int) (unsigned short)10498)) : (((/* implicit */int) (signed char)94)))) | (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) var_5)), ((unsigned short)9233)))) < (((/* implicit */int) (signed char)-95)))))));
                            arr_36 [i_6] [i_6] [i_7] [i_8 + 1] [i_12] = ((/* implicit */signed char) var_3);
                        }
                        for (int i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            var_41 = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_6 + 1] [i_7] [i_6] [i_13])) - (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)19), (((/* implicit */signed char) arr_37 [i_5] [8ULL] [i_6 + 2] [14ULL] [i_13]))))))))));
                            var_42 = ((/* implicit */unsigned short) (~(min((max((((/* implicit */long long int) arr_7 [i_5] [i_6] [i_13] [(signed char)18])), (var_8))), (((/* implicit */long long int) arr_13 [i_7] [i_7 - 1] [i_7]))))));
                            var_43 = ((/* implicit */_Bool) arr_27 [i_6] [i_13]);
                            arr_39 [i_5] [i_6] [i_7 - 1] [i_13] [i_13] |= ((/* implicit */unsigned long long int) (signed char)-75);
                            arr_40 [i_5] [i_6] [i_8] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_14), (((/* implicit */unsigned short) arr_2 [i_6 + 3] [i_6])))))) + (((arr_28 [i_8] [i_8] [i_8] [i_8] [i_8 + 2]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)88))) : (arr_6 [i_7] [i_6 + 3])))))) ? (((/* implicit */int) var_3)) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (max((((/* implicit */int) arr_35 [i_5] [i_6] [i_5] [i_5] [(unsigned short)11])), (-1124310099)))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            arr_44 [i_5] [i_5] [i_6] [i_6] [i_8 + 2] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) var_8))), (((((/* implicit */int) var_12)) << (((/* implicit */int) arr_22 [i_5] [i_6] [i_7 + 1]))))))) / (arr_17 [i_14])));
                            var_44 = ((/* implicit */short) (+(min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 381401505U))))), (3135224474U)))));
                            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_6 + 3] [i_6] [i_8 + 1] [i_8 - 1] [i_8])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_6] [i_6] [i_8 + 2] [i_8] [i_14])) ? (((/* implicit */int) arr_35 [i_7] [i_6] [i_8 - 1] [i_8] [i_8 + 1])) : (((/* implicit */int) arr_35 [6] [i_6] [i_8 + 2] [i_8] [i_14]))))) : (((2803678552U) & (((/* implicit */unsigned int) 1559715235))))));
                        }
                    }
                } 
            } 
        }
        for (int i_15 = 1; i_15 < 18; i_15 += 4) 
        {
            arr_47 [i_5] [(_Bool)1] = ((/* implicit */int) (unsigned short)55949);
            arr_48 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_8 [i_5] [i_15 + 1] [i_5 + 1]), (((/* implicit */int) arr_28 [(_Bool)1] [(unsigned short)13] [i_15 + 2] [i_15] [i_15]))))) ? (((((/* implicit */_Bool) arr_8 [i_5 - 1] [i_15 - 1] [i_15])) ? (3135224474U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3675))))) : (max((((/* implicit */unsigned int) arr_8 [i_5] [i_15 - 1] [i_15])), (1159742829U)))));
        }
    }
    for (signed char i_16 = 2; i_16 < 22; i_16 += 4) 
    {
        var_46 += ((/* implicit */int) ((_Bool) (unsigned short)55994));
        var_47 = ((/* implicit */_Bool) (-(max(((~(((/* implicit */int) arr_52 [i_16])))), (max((-726803843), (((/* implicit */int) (unsigned short)46452))))))));
    }
}
