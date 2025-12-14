/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94708
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
    var_15 = ((/* implicit */_Bool) var_11);
    var_16 = ((/* implicit */unsigned long long int) min(((short)-32758), (((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))));
    var_17 = ((/* implicit */long long int) min((var_4), (((/* implicit */unsigned int) (((+(((/* implicit */int) (signed char)76)))) != (((/* implicit */int) (short)-28413)))))));
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)65514)))) && (((/* implicit */_Bool) var_10)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) arr_3 [i_2] [i_1]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [3] [(signed char)5] [i_1] [3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (-1777738504) : (((/* implicit */int) var_10))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */int) (unsigned short)65514)))) > (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0])), ((short)8191))))))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((var_14), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) var_7))))) ? ((((_Bool)0) ? ((+(((/* implicit */int) arr_6 [i_2] [i_1])))) : ((~(((/* implicit */int) arr_11 [1LL] [i_1] [i_2] [i_2] [i_1] [i_4])))))) : (min((arr_13 [i_1] [i_2] [i_3 + 2] [i_3] [i_3 - 1]), (((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1] [i_3] [i_3 + 1]))))));
                                var_20 = ((/* implicit */short) var_8);
                            }
                        } 
                    } 
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_1] [i_5 - 1] [i_6] [(_Bool)1] [8LL] = ((/* implicit */unsigned short) -1709661874);
                                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_1] [(short)5])) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)-13539))))))) ? (((((/* implicit */_Bool) var_6)) ? (arr_13 [7U] [7U] [i_7] [i_5 - 1] [i_0]) : (((/* implicit */int) (unsigned short)65522)))) : (((/* implicit */int) (short)-26600))));
                                arr_27 [(short)1] [(short)1] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)25227));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_8))));
                                var_23 += ((/* implicit */unsigned char) ((unsigned long long int) 79030956U));
                                var_24 = ((/* implicit */long long int) 18446744073709551607ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 15; i_10 += 2) 
                    {
                        for (unsigned int i_11 = 2; i_11 < 11; i_11 += 2) 
                        {
                            {
                                arr_39 [i_0] [i_1] [i_10] [(_Bool)1] [i_11] = ((/* implicit */long long int) var_2);
                                arr_40 [i_5] = ((/* implicit */int) ((((/* implicit */long long int) ((max((((/* implicit */unsigned int) 400646031)), (var_4))) << (((((/* implicit */_Bool) 4169768787U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [2U] [i_5]))) : (var_2)))))) >= (-2320839966613186464LL)));
                                arr_41 [i_0] [i_1] [i_5] [i_5] [i_10] [i_11] = ((/* implicit */unsigned int) min((((/* implicit */long long int) min(((short)12288), (((/* implicit */short) var_5))))), (-109152794149937079LL)));
                                var_25 = ((/* implicit */unsigned short) var_11);
                                arr_42 [(_Bool)1] [i_11] [i_11] [i_10] [i_11] = ((/* implicit */unsigned char) (+((-(-5LL)))));
                            }
                        } 
                    } 
                    arr_43 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_2 [i_1])), (arr_25 [i_0] [i_1] [i_5 - 1] [i_0] [i_1])))) ? (max((((/* implicit */int) (unsigned short)65522)), (var_11))) : (((/* implicit */int) (unsigned short)0))))), (((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)44170), (arr_21 [i_0] [i_1]))))) + (arr_18 [i_5] [i_5 - 1] [i_5] [i_5])))));
                }
                var_26 = ((((/* implicit */_Bool) 1938034477U)) && (((/* implicit */_Bool) (-2147483647 - 1))));
                var_27 = ((/* implicit */short) ((unsigned char) (-2147483647 - 1)));
            }
        } 
    } 
}
