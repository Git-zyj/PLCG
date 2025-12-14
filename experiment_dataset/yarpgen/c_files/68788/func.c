/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68788
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
    var_17 = ((/* implicit */unsigned short) var_12);
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((max((((-1550441301) / (((/* implicit */int) var_2)))), (((/* implicit */int) var_1)))) * (((/* implicit */int) var_16)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_1 [i_0 - 3] [i_0])) ^ (((/* implicit */int) var_6))))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 2])) / (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 1])))), (((((/* implicit */int) arr_1 [i_0 - 3] [i_0 + 1])) ^ (((/* implicit */int) var_12)))))))));
    }
    for (signed char i_1 = 3; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_20 *= ((/* implicit */short) (~(min((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (4294967295U))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)32763)))))))));
        arr_8 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        arr_9 [i_1] = ((/* implicit */long long int) ((min((((/* implicit */int) var_1)), (arr_6 [i_1] [i_1]))) % (min((((((((/* implicit */int) var_13)) + (2147483647))) >> (((((/* implicit */int) (short)907)) - (878))))), ((+(((/* implicit */int) (short)-10888))))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    arr_14 [i_3] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1 + 1] [i_1 - 1])) ? (((/* implicit */long long int) var_7)) : (arr_12 [i_1 - 1] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 2] [i_1 + 1])) & (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 2] [i_1 - 2]))))) : (max((((/* implicit */unsigned long long int) arr_12 [i_1 - 1] [i_1 - 1])), (1546642664666679763ULL)))));
                    var_21 = ((/* implicit */unsigned int) max((min((((((/* implicit */int) arr_10 [i_2] [i_1])) + (((/* implicit */int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (((((/* implicit */int) (short)-32762)) + (((/* implicit */int) arr_5 [i_1]))))));
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */int) var_13)) * (((/* implicit */int) var_1)))), (((((/* implicit */int) (short)-32750)) % (((/* implicit */int) (unsigned short)21867)))))))));
    }
    for (signed char i_4 = 3; i_4 < 18; i_4 += 3) /* same iter space */
    {
        arr_18 [(signed char)2] [i_4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_17 [i_4 - 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_4 - 3] [i_4])))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (arr_17 [i_4 + 1]))) : (min((arr_17 [i_4 - 3]), (arr_17 [i_4 + 1])))));
        /* LoopNest 3 */
        for (short i_5 = 4; i_5 < 15; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                for (int i_7 = 1; i_7 < 17; i_7 += 2) 
                {
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))) == (var_15)));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) > (min((((((/* implicit */_Bool) (short)-32763)) ? (var_7) : (1429765220))), (((((/* implicit */int) arr_20 [i_4])) | (((/* implicit */int) arr_5 [i_6])))))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 1; i_8 < 7; i_8 += 4) 
    {
        for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (long long int i_10 = 1; i_10 < 8; i_10 += 1) 
            {
                {
                    arr_34 [0] [i_8] [i_10 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_8] [i_9] [i_10])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) var_6)))))))) ? (((((/* implicit */int) ((signed char) 6271901774645759401LL))) * (((/* implicit */int) ((var_7) != (((/* implicit */int) arr_29 [i_8] [i_9]))))))) : (((/* implicit */int) max((((/* implicit */signed char) arr_13 [i_8 + 2] [i_8 + 2] [i_10 + 1])), (arr_24 [i_10] [i_8] [i_10]))))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        for (long long int i_12 = 2; i_12 < 7; i_12 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) min(((+(((/* implicit */int) arr_11 [i_8 - 1] [i_12 + 2] [i_12 - 1])))), (((/* implicit */int) arr_11 [i_8 - 1] [i_12 - 2] [i_12]))));
                                arr_40 [i_12] [i_12] [i_8] [(short)2] [i_8] [i_12] [i_8] |= ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_8] [i_12] [(short)8]))))) / (((((/* implicit */_Bool) (short)-32741)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32741))) : (var_4))))), (((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_2)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))));
                                var_25 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((long long int) -1073741824))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)8332)) % (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((int) (short)905))) : (((((/* implicit */_Bool) arr_39 [i_8] [i_8] [i_8] [i_8])) ? (6271901774645759401LL) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                                var_26 = ((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (-6271901774645759401LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */unsigned long long int) ((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) % (((((/* implicit */unsigned long long int) var_0)) * (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(var_4))) > (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (short)2810))))))))))));
}
