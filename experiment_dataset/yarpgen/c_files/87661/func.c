/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87661
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
    var_15 = var_13;
    /* LoopSeq 4 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_0 [i_0]))))) | (((/* implicit */int) ((arr_0 [i_0]) || (((/* implicit */_Bool) arr_1 [i_0]))))))) : (((/* implicit */int) arr_1 [i_0]))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)17))))) ? (((/* implicit */int) ((((unsigned int) -6129698551219674503LL)) == (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 4])))))) : (((/* implicit */int) min((((/* implicit */unsigned short) min(((short)27516), (var_12)))), (var_3))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) var_10)), (arr_3 [i_0]))))) ? (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (7953231556510324597LL)))) | (arr_4 [(_Bool)1] [4]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (((/* implicit */int) (short)-16856))))))))));
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 22; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */_Bool) ((((max((var_6), (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [(unsigned short)8] [i_2] [i_2])))) > (((/* implicit */unsigned long long int) (-(var_1)))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((short) var_14))) && (((((/* implicit */int) var_14)) >= (((/* implicit */int) var_12)))))))));
                            arr_12 [i_4] [i_4 - 1] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2045801214)) ? (((/* implicit */int) (short)27516)) : (((/* implicit */int) (_Bool)1))))) > (min((((/* implicit */unsigned long long int) max((var_8), (((/* implicit */unsigned int) (short)-27517))))), (((unsigned long long int) (_Bool)0))))));
                        }
                        arr_13 [i_0 - 2] [(signed char)8] [i_2] [i_2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_11 [i_0] [i_1] [i_0 + 3] [i_3] [i_2] [i_2 - 1] [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-31))) % (arr_11 [i_0] [i_0] [i_0 - 3] [i_3] [i_2] [i_2 - 2] [i_3]))) : (min((-8272719476286303124LL), (((/* implicit */long long int) var_0))))));
                    }
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-(min((var_2), (((/* implicit */unsigned int) var_9)))))))));
                    /* LoopNest 2 */
                    for (short i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (min((((((/* implicit */_Bool) (-(((/* implicit */int) (short)-27494))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-31))))) : (max((1276668062520751320ULL), (var_6))))), (((/* implicit */unsigned long long int) ((signed char) ((1346593226264822022ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))))))))));
                                arr_18 [i_1] [i_2] [i_2] [(unsigned char)10] [i_6] = max(((!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_6])))), (((((/* implicit */int) arr_5 [i_6] [i_6] [i_2] [i_5 + 3])) <= (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_5] [i_5] [i_6] [i_0]))))))));
                                var_21 = ((/* implicit */int) arr_1 [6U]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            {
                                arr_25 [i_0] [i_1] [i_2] [i_1] [i_8] = ((/* implicit */short) min((((int) -7953231556510324589LL)), (((511) / (((/* implicit */int) arr_19 [i_0 - 3]))))));
                                arr_26 [i_0 - 2] [i_0 - 2] [i_2] [5ULL] [i_8] = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_24 [12] [12] [i_2 + 1] [i_7] [i_8])))) <= (arr_8 [i_0 + 1] [i_1] [i_7] [i_7] [i_7])))) >= (((((/* implicit */int) ((unsigned char) -16823163))) >> (((min((arr_4 [i_1] [i_7]), (((/* implicit */int) var_5)))) - (37914)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_27 [i_0 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (unsigned short)65535))) && ((!(((/* implicit */_Bool) 7953231556510324604LL))))));
        var_22 *= ((/* implicit */signed char) ((max((((((/* implicit */int) (signed char)-106)) & (-16823156))), (16823162))) | (((/* implicit */int) (short)-16869))));
    }
    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
    {
        arr_31 [i_9] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_16 [i_9] [i_9] [i_9] [(unsigned char)6]))) ? (((arr_6 [i_9] [i_9] [(unsigned short)11] [i_9]) / (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) var_0))));
        var_23 *= ((/* implicit */unsigned long long int) (+(max((((/* implicit */long long int) ((((/* implicit */int) arr_9 [(short)0] [i_9] [i_9] [i_9] [i_9] [i_9])) * (((/* implicit */int) (unsigned char)89))))), (var_11)))));
    }
    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
    {
        arr_35 [i_10] [i_10] = ((/* implicit */short) (~(((((/* implicit */_Bool) 1895507537306442178LL)) ? (7953231556510324597LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
        {
            for (unsigned short i_12 = 2; i_12 < 20; i_12 += 4) 
            {
                {
                    var_24 &= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (arr_10 [i_10] [i_10] [i_10] [i_10] [i_10])))) ? (((unsigned long long int) ((arr_29 [(unsigned char)0]) > (((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) arr_28 [i_12])))))))));
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) var_5))) >> (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)51))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_11])) || (((/* implicit */_Bool) 7953231556510324604LL)))))))))))));
                                var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) min((((((/* implicit */unsigned long long int) arr_8 [i_13] [8LL] [8LL] [i_14 + 1] [i_12 + 1])) | (6526002513151778426ULL))), (((/* implicit */unsigned long long int) ((_Bool) -3656922125801634520LL))))))));
                                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) min((((7953231556510324588LL) / (3280003501884872561LL))), (((/* implicit */long long int) arr_40 [i_10] [i_12 + 2] [i_12] [i_13] [i_14 + 1]))))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_14 + 1] [i_14] [i_14 + 1] [i_14] [i_14 + 1]))))))));
                            }
                        } 
                    } 
                    arr_44 [i_11] = ((/* implicit */unsigned long long int) var_5);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) /* same iter space */
    {
        arr_48 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [(_Bool)1] [i_15]))))) : (((/* implicit */int) arr_37 [i_15] [i_15]))));
        /* LoopNest 3 */
        for (int i_16 = 2; i_16 < 21; i_16 += 4) 
        {
            for (unsigned int i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                for (unsigned long long int i_18 = 0; i_18 < 22; i_18 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_19 = 0; i_19 < 22; i_19 += 1) 
                        {
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (~(((/* implicit */int) var_14)))))));
                            arr_60 [i_15] [i_19] [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)6144)) || (((/* implicit */_Bool) var_12))));
                            var_29 ^= ((/* implicit */unsigned int) (~(arr_42 [i_16 - 1] [i_16] [i_16] [i_16 - 2])));
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_18] [i_16 + 1])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6145))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
                        }
                        var_31 = ((/* implicit */unsigned long long int) ((arr_24 [i_16] [i_16] [i_16 + 1] [i_16] [i_16]) / (arr_24 [i_16] [(signed char)15] [i_16 - 2] [i_16] [i_16 - 2])));
                    }
                } 
            } 
        } 
    }
}
