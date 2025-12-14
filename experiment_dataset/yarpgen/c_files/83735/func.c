/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83735
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
    var_10 = var_1;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) max(((unsigned short)32768), (((/* implicit */unsigned short) (unsigned char)255)))))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_12 = ((/* implicit */short) min((((/* implicit */long long int) max((((/* implicit */unsigned int) max((arr_3 [i_2]), (((/* implicit */short) arr_6 [i_0] [5U] [i_2] [i_3]))))), (max((arr_5 [i_0] [i_0] [i_2] [i_3]), (((/* implicit */unsigned int) var_4))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) (short)4624))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_2]))))) : (((((/* implicit */_Bool) arr_2 [(unsigned short)4] [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_1)))))));
                    arr_10 [i_0] [i_1] [(unsigned char)7] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (short)-4625)) || (((/* implicit */_Bool) (unsigned char)99))))) >> (((min((var_3), (((((/* implicit */_Bool) var_1)) ? (arr_5 [(unsigned short)10] [i_2] [i_1] [i_0]) : (var_7))))) - (2246218552U)))));
                }
                var_13 = ((/* implicit */unsigned char) var_7);
                var_14 = max((var_1), (((/* implicit */long long int) ((var_8) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))))));
                arr_11 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)156)) - (((/* implicit */int) (unsigned char)255))))) ? ((-(((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_1 - 1])))) : (((/* implicit */int) (unsigned short)19879))));
            }
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) arr_6 [i_0] [6LL] [(unsigned char)8] [(unsigned short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_5 [i_0] [(unsigned char)3] [(short)8] [i_0]))))), (((/* implicit */unsigned int) arr_8 [i_0])))))));
                var_16 = ((/* implicit */short) arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)4632))) : (var_1)));
                /* LoopSeq 2 */
                for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    var_18 = ((/* implicit */unsigned short) (-((~((~(arr_15 [(short)5] [i_1] [i_4] [i_5])))))));
                    arr_16 [i_5] = ((/* implicit */unsigned short) arr_7 [i_1 + 1] [i_1 - 1]);
                    arr_17 [i_0] [i_1] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)174)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (4294967289U)))) ? (((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-32749))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) -7969275192255280624LL)) || (((/* implicit */_Bool) var_7))))), (max((((/* implicit */long long int) arr_8 [i_0])), (8931535532447054432LL)))))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_1 + 1])) & (((/* implicit */int) arr_0 [i_1 - 1]))))), (var_3))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_0])) : (((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_5] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))))))));
                }
                for (unsigned int i_6 = 2; i_6 < 10; i_6 += 3) 
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(unsigned char)7] [i_1] [i_4] [i_6] [i_6] [i_6 - 2]))) : (4095LL)));
                    arr_20 [i_0] [i_1] [i_4] = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_7 [i_0] [0LL])))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_13 [i_4]))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) 2423180202U)) - (1673995610013418077LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [i_0] [(_Bool)1] [i_6]))))) : (arr_7 [i_1 + 1] [i_6 + 1]))));
                    var_22 += (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_2))))) * (((long long int) 1596934053U))))));
                }
            }
            for (unsigned char i_7 = 1; i_7 < 10; i_7 += 4) 
            {
                var_23 = ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_15 [i_0] [i_0] [i_1] [i_0]) : (((/* implicit */long long int) max((((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_5 [i_0] [i_1] [i_7 - 1] [i_1]))), (var_7)))));
                var_24 = ((/* implicit */unsigned short) var_6);
            }
            /* vectorizable */
            for (unsigned short i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1]))))) * (((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [10LL] [i_1 - 1]))))))));
                var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (_Bool)0))));
                var_27 = ((/* implicit */unsigned short) var_3);
            }
            var_28 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)20)), (arr_1 [i_0])))) >> (((((/* implicit */int) var_2)) - (86))))));
            arr_27 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)123)) % (((/* implicit */int) arr_0 [i_0])))))))) | (((/* implicit */int) arr_2 [i_0] [i_1 + 1]))));
            var_29 = ((/* implicit */unsigned short) 0U);
            var_30 -= ((/* implicit */short) ((unsigned short) arr_26 [i_0] [i_0] [i_0]));
        }
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2305843009213693952LL)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
        var_32 -= ((/* implicit */short) ((_Bool) (unsigned char)0));
        var_33 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_26 [i_0] [i_0] [i_0]))))));
    }
    for (unsigned char i_9 = 1; i_9 < 21; i_9 += 4) 
    {
        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) (short)11682)) < (((/* implicit */int) (short)(-32767 - 1))))))));
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) arr_29 [i_9])) ? (arr_29 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))))))));
        arr_30 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_9 + 1] [i_9 - 1])) & (((/* implicit */int) (short)32767))))) && (((/* implicit */_Bool) arr_29 [i_9]))));
        var_36 = ((var_4) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
        var_37 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (((+(var_3))) > (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_6))))))), (((((var_8) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27041))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
    }
}
