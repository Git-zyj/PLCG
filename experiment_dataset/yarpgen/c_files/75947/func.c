/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75947
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)32001)) ? ((+(((/* implicit */int) (unsigned short)15)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (unsigned char)193))))) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) arr_0 [i_0 + 1])))))))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) max((min((((/* implicit */int) ((((/* implicit */int) (short)-32014)) < (((/* implicit */int) (unsigned short)19064))))), ((-(((/* implicit */int) (unsigned short)64512)))))), (((/* implicit */int) var_3)))))));
                var_16 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) var_6)) | (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9)))))));
                var_17 = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */int) ((-8491941303753107735LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-32017)))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) var_11)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned short)1024))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)64520))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_7)))))))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_19 ^= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_4 [i_2] [i_3] [i_4])) : (((/* implicit */int) arr_4 [i_2] [i_5] [i_4])))));
                        /* LoopSeq 1 */
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned short) min((min((((long long int) (unsigned short)1016)), (((/* implicit */long long int) arr_2 [i_2] [i_3] [i_4])))), (((/* implicit */long long int) ((unsigned short) min(((unsigned short)50091), (((/* implicit */unsigned short) (signed char)0))))))));
                            arr_17 [i_3] [i_4] [i_5] = (unsigned short)1012;
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_5 [i_2])), ((unsigned short)49139)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)0)), (var_11))))) : (max((arr_14 [i_2] [16LL] [(unsigned short)13] [i_6]), (((/* implicit */long long int) arr_16 [i_2] [i_3] [i_4] [12LL] [(signed char)6]))))))) ? (arr_13 [i_2] [i_4] [(unsigned short)0] [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_0)))) ? (((/* implicit */int) min((var_11), (var_8)))) : (((((/* implicit */int) var_11)) & (((/* implicit */int) var_8))))))))))));
                        }
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32013)) ? (var_2) : (((((/* implicit */_Bool) 16163566448497883429ULL)) ? (778469584703633339LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2] [i_7] [i_7]))))))))));
                        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                        var_24 ^= ((/* implicit */short) (unsigned char)96);
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)4796))))) ? (((((/* implicit */_Bool) var_13)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) (unsigned short)4053))))))));
                    }
                }
                for (long long int i_8 = 2; i_8 < 16; i_8 += 1) 
                {
                    var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)16395)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (signed char)-1))));
                    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 5853254249716459111ULL)) ? (5853254249716459110ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)996))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_9 = 1; i_9 < 15; i_9 += 2) 
                    {
                        var_28 = var_13;
                        arr_26 [i_2] [i_3] [i_8] [13LL] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((var_9), (((/* implicit */short) arr_10 [i_2] [i_3] [i_8] [9LL]))))), (((((/* implicit */_Bool) arr_24 [i_8 - 1] [(unsigned short)1] [i_9] [i_9 - 1])) ? ((+(7923321724477002507LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 12593489823993092506ULL))))))));
                        arr_27 [(unsigned short)0] = ((/* implicit */unsigned short) max((12593489823993092505ULL), (12593489823993092505ULL)));
                        var_29 ^= ((/* implicit */long long int) ((unsigned long long int) (-(max((var_4), (((/* implicit */long long int) var_8)))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned long long int) arr_6 [i_2] [(unsigned short)0])) : (var_0))), (((/* implicit */unsigned long long int) arr_10 [i_2] [i_3] [i_8] [i_10]))));
                        arr_30 [i_2] [i_2] [i_10] [i_8] [7LL] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_8 - 1])) & (((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) (unsigned short)49139)) : (((/* implicit */int) (unsigned short)65528))))));
                        var_31 = ((/* implicit */long long int) var_1);
                    }
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 4) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned short) ((((long long int) (unsigned char)159)) == (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [(unsigned short)4] [i_11] [i_12])))));
                                var_33 *= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_2))))))) + (((/* implicit */int) (unsigned short)996))));
                                var_34 *= ((/* implicit */unsigned long long int) ((unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_11))))), (var_0))));
                                var_35 = ((/* implicit */unsigned short) var_1);
                                arr_37 [i_2] [10LL] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) arr_6 [i_2] [i_11])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)16399)))) == (((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                }
                var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)996)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) ((unsigned short) (unsigned short)65535)))))) ? (((/* implicit */int) (signed char)52)) : (((/* implicit */int) (unsigned char)138))));
            }
        } 
    } 
}
