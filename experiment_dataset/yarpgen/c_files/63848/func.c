/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63848
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
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-31565))) : ((+(var_4))))) & ((-(((((/* implicit */_Bool) (short)16128)) ? (3008651607U) : (1286315707U)))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) 1286315707U))) + (((/* implicit */int) ((signed char) (unsigned short)21533)))))) ? ((~(((((/* implicit */_Bool) (signed char)-126)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) 436858286)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16867011024957800692ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))) : (3008651573U)))) ? (558205491U) : (min((1286315722U), (558205493U))))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32766)) ? (1286315698U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34506)))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1286315674U)) ? (3008651573U) : (3008651573U)));
        arr_4 [i_0] = ((/* implicit */short) (-(min((min((((/* implicit */unsigned long long int) (short)-27151)), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2ULL)) && (((/* implicit */_Bool) arr_1 [(short)4])))))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) -1228730863);
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    arr_15 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)189)) * (((/* implicit */int) arr_7 [i_1]))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3]))) / (3008651617U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65526)) - (((/* implicit */int) arr_7 [i_1])))))));
                    arr_16 [i_2] [i_3] = ((/* implicit */signed char) -1228730884);
                }
                for (unsigned short i_4 = 2; i_4 < 7; i_4 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_22 [i_2] = (unsigned char)106;
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (((!((!(((/* implicit */_Bool) 0U)))))) ? (((((/* implicit */_Bool) 3008651597U)) ? (max((((/* implicit */unsigned long long int) arr_21 [(_Bool)1] [6LL] [i_4] [i_5])), (18446744073709551613ULL))) : (((/* implicit */unsigned long long int) 154178872)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102))))))));
                    }
                    var_21 = ((/* implicit */unsigned short) (+(arr_6 [i_2])));
                }
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    arr_25 [i_1] [i_2] [(signed char)3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_9 [i_6])) : (((/* implicit */int) arr_9 [i_1]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))))))));
                    arr_26 [i_1] [i_2] [i_6] = ((/* implicit */signed char) max((((10833253460841383036ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_6] [i_2]))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                    arr_27 [i_1] [i_2] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (unsigned short)65520)) - (((/* implicit */int) (_Bool)1)))));
                    arr_28 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-27151)) ? (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) (_Bool)1)))) | (((((/* implicit */_Bool) arr_11 [i_1] [(unsigned short)7] [i_6])) ? (((/* implicit */int) (unsigned short)2378)) : (((/* implicit */int) arr_23 [i_1] [i_2] [i_2] [i_6]))))))) : (((long long int) ((154178872) >= ((-2147483647 - 1)))))));
                }
            }
        } 
    } 
    var_22 = var_13;
    var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((var_16), (((/* implicit */unsigned short) var_2)))))));
}
