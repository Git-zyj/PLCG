/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96894
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) 2251799813619712LL)) ? (2251799813619712LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((2251799813619712LL), (2251799813619712LL)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((signed char) arr_0 [i_0 + 1])))));
                var_15 = ((unsigned char) (unsigned char)9);
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_9 [i_0 + 3] [i_0] [i_0] [i_0 - 1])), ((~(11726602531313325609ULL))))) != (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_1] [i_2]))))), (-2251799813619712LL))))));
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((/* implicit */long long int) var_7)), (var_0))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) var_8);
                    var_19 = ((/* implicit */unsigned int) arr_9 [i_2] [i_1] [i_1] [i_0]);
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1)))))));
                }
                for (short i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        for (signed char i_7 = 2; i_7 < 22; i_7 += 4) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_1] [i_0] [i_6] [i_7] [i_5] = ((/* implicit */signed char) arr_14 [i_0] [i_1] [i_5] [i_5]);
                                arr_21 [i_0] [i_1] [i_5] [i_5] [i_0] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) arr_11 [i_6] [i_6 + 1] [i_6] [i_6 + 1] [i_6])), (0ULL))) << (((max((arr_11 [i_6] [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_6]), (((/* implicit */int) var_4)))) - (79)))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (_Bool)1))) / (min((((((/* implicit */int) (unsigned char)1)) % (((/* implicit */int) (unsigned char)204)))), (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_5] [i_5] [i_1] [i_0]))))));
                    var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_5] [i_0] [i_0] [i_5])) ? (((/* implicit */int) min((var_6), (((/* implicit */short) arr_1 [i_0]))))) : (((/* implicit */int) min((arr_16 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)0)))))))), (((((2569227983U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64201))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)29866))))))))));
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((var_12), (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0 + 2]))))))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        for (long long int i_9 = 1; i_9 < 21; i_9 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_5] [i_8] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */int) arr_12 [i_0] [i_0] [i_5] [i_0])) == (((/* implicit */int) arr_12 [i_1] [i_1] [i_5] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (signed char)-1))))))))));
                                arr_29 [i_0] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (2251799813619697LL) : (-11LL)))))));
                                var_24 = ((/* implicit */signed char) (~((+(((/* implicit */int) (_Bool)0))))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0 - 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)17))))) : (((/* implicit */int) ((unsigned short) (unsigned short)29866)))));
                    var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) var_5)))) + (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (long long int i_11 = 4; i_11 < 22; i_11 += 4) 
                    {
                        var_27 = ((/* implicit */short) max((var_27), (((short) arr_31 [i_0]))));
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_0 - 1] [i_11 - 1])))))));
                    }
                }
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (unsigned short)0)))))), ((((_Bool)1) ? (((((/* implicit */_Bool) (signed char)18)) ? (1763297954U) : (arr_14 [i_0] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)67))))))))));
            }
        } 
    } 
    var_30 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((753660339U), (((/* implicit */unsigned int) (unsigned char)255))))) ? (((/* implicit */int) min((var_6), (var_3)))) : (((/* implicit */int) var_3))))) ? (min((((/* implicit */long long int) var_10)), (var_12))) : (((((_Bool) (short)-11124)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (min((((/* implicit */long long int) (unsigned short)65534)), (var_12)))))));
    /* LoopNest 3 */
    for (int i_12 = 0; i_12 < 17; i_12 += 3) 
    {
        for (long long int i_13 = 2; i_13 < 13; i_13 += 4) 
        {
            for (short i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                {
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11121)) ? (183903813) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned char)24)) : (((arr_0 [i_12]) ^ (arr_11 [i_12] [i_13] [i_14] [i_14] [i_13])))))) < (((var_12) ^ (((/* implicit */long long int) max((arr_32 [i_13] [i_13] [i_12] [i_12]), (((/* implicit */int) (unsigned short)4))))))))))));
                    var_32 = ((/* implicit */int) var_10);
                    arr_43 [i_12] [i_12] [i_12] [i_12] = (~(((/* implicit */int) (unsigned char)231)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        var_33 = ((/* implicit */int) (-((-(var_9)))));
                        arr_46 [i_12] [i_12] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */int) ((0ULL) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_38 [i_12] [i_13])))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 183903813))))))));
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */long long int) var_9);
}
