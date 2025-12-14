/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5702
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (max((0U), (((/* implicit */unsigned int) (unsigned short)32767)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))))) <= (min((min((((/* implicit */unsigned long long int) var_9)), (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (1U))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        arr_13 [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_11 [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_11 [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_11 [i_0] [i_2] [i_2])))) << (((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) arr_4 [(unsigned char)7] [i_1] [i_2]))))) ? (((arr_8 [(unsigned char)8] [i_2] [i_2] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32766))) : (10U))) : (arr_6 [i_0] [i_3])))));
                        var_13 = ((/* implicit */_Bool) ((((unsigned int) (!(arr_10 [i_2])))) + (((((/* implicit */_Bool) ((arr_3 [i_3]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_2]))))) ? (((((/* implicit */_Bool) arr_12 [(signed char)7] [i_1] [(_Bool)0] [i_2] [i_3] [(short)8])) ? (arr_7 [8U] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 4294967283U))))))));
                    }
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((max((5978026228522015457ULL), (((((/* implicit */_Bool) arr_7 [i_1] [i_4])) ? (3491611933524295607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [0U]))))))), (((/* implicit */unsigned long long int) ((_Bool) arr_5 [i_0]))))))));
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [(unsigned short)9] [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_2] [i_0] [i_1])) : (((/* implicit */int) arr_0 [(unsigned short)3])))), ((+(((/* implicit */int) arr_12 [7U] [i_0] [i_1] [i_2] [i_2] [i_4]))))))) && (((/* implicit */_Bool) (~((~(((/* implicit */int) arr_8 [i_0] [i_2] [(unsigned char)1] [i_0])))))))));
                        arr_16 [(signed char)7] [(signed char)7] [i_2] = ((/* implicit */signed char) arr_5 [i_4]);
                    }
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_5] [i_1])) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_12 [i_0] [i_1] [i_1] [i_2] [i_2] [9U]), (((/* implicit */unsigned short) var_2))))))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (((var_7) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_5])) : (((/* implicit */int) arr_11 [i_0] [i_2] [i_2]))))))) : (((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) arr_11 [i_2] [i_2] [0U])) : (((/* implicit */int) arr_1 [i_1]))))) ? (arr_6 [i_1] [i_2]) : (arr_14 [i_2] [i_1] [i_2] [i_1] [i_2])))));
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 13U))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [8ULL] [i_5])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [(unsigned char)9])))) <= ((-(((/* implicit */int) (unsigned short)57756))))))) : ((-(((/* implicit */int) max((((/* implicit */short) arr_17 [(unsigned char)8] [(unsigned char)1] [(unsigned char)8] [6U] [(unsigned short)5] [i_2])), (arr_5 [i_1])))))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
                        {
                            {
                                arr_25 [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)27)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8192))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((signed char) var_4))))))));
                                var_18 = ((/* implicit */unsigned int) var_10);
                                var_19 = arr_20 [i_0] [i_0] [i_2] [i_2] [i_7];
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? ((-(7844729621170313135ULL))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [(unsigned short)7] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_14 [i_1] [i_1] [i_1] [i_2] [i_2])))) / ((+(arr_21 [i_0] [i_1] [9U] [i_2] [(short)9] [i_0]))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_28 [i_0] [i_2] [i_2] [i_2] [i_0] [i_0] = arr_24 [i_8] [i_2] [i_2] [i_1] [i_0];
                        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3073590517U)) ? (((/* implicit */int) (unsigned short)26064)) : (((/* implicit */int) (unsigned short)39490))))))))));
                    }
                    arr_29 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_1] [i_0] [(signed char)4]);
                }
            } 
        } 
    } 
}
