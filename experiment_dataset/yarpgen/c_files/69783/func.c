/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69783
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) | (var_3)))))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) != (342560139386032145LL)))) / (((/* implicit */int) ((min((arr_0 [i_0]), (((/* implicit */int) arr_1 [i_0])))) != ((-(((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [7LL])) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) (~(((/* implicit */int) var_0))))) : ((-(var_1)))))) ? ((~(((/* implicit */int) ((((/* implicit */int) (short)23471)) > (((/* implicit */int) var_10))))))) : (((/* implicit */int) (!(((_Bool) arr_0 [i_0])))))));
            var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0])) > (((/* implicit */int) arr_1 [i_1 - 2])))))));
            /* LoopSeq 4 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
            {
                arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [(_Bool)0]))) : (((((/* implicit */unsigned long long int) arr_0 [i_0])) | (var_2)))))) ? (((/* implicit */int) max((max((arr_5 [i_0] [(short)11]), (((/* implicit */unsigned short) (unsigned char)32)))), (((/* implicit */unsigned short) arr_3 [i_0] [i_0]))))) : (arr_0 [i_0])));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    var_21 = ((/* implicit */unsigned short) (((~(arr_4 [i_0] [i_0]))) | (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0])))))));
                    var_22 = ((((/* implicit */_Bool) var_6)) ? (arr_11 [i_2] [i_1] [i_2 - 1] [i_1 - 3] [i_0]) : (((/* implicit */long long int) ((arr_6 [i_1] [i_1] [i_2] [i_0]) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0))))));
                }
                for (signed char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)10)) ? (((/* implicit */int) (unsigned char)27)) : (((/* implicit */int) (short)-27335))));
                    arr_16 [i_4] [i_0] = ((/* implicit */short) (-(arr_0 [i_0])));
                }
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
            {
                arr_20 [i_0] [i_0] [i_0] [9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
                var_24 = ((/* implicit */unsigned short) (((((+((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_5])))))) + (2147483647))) << (((((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) 3353955936U)) : (arr_14 [i_0])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [(short)12])))) : (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) arr_18 [i_0])) : (((/* implicit */int) var_6)))))) - (28703)))));
                var_25 = ((/* implicit */_Bool) (~((+(((/* implicit */int) ((unsigned short) var_13)))))));
                var_26 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(3353955933U)))) ? ((-(((/* implicit */int) arr_6 [i_0] [i_1 - 3] [i_1 + 1] [12LL])))) : (((/* implicit */int) (signed char)-91)))) >> ((((+(((/* implicit */int) ((signed char) arr_1 [i_1]))))) + (89)))));
            }
            /* vectorizable */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_27 += ((/* implicit */_Bool) (~(arr_14 [(unsigned short)2])));
                arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_14 [i_0]);
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (((/* implicit */int) var_12))))) ? (((/* implicit */int) arr_5 [(unsigned short)2] [(unsigned short)2])) : ((~(var_3))))))));
                /* LoopSeq 3 */
                for (long long int i_7 = 1; i_7 < 12; i_7 += 3) /* same iter space */
                {
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((-5056795343635684738LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | (arr_23 [i_0])));
                    var_29 = ((/* implicit */unsigned long long int) (((+(arr_26 [i_0] [i_1] [(short)5] [i_7 - 1] [i_1]))) ^ ((~(((/* implicit */int) arr_6 [i_0] [i_0] [(short)12] [i_0]))))));
                    var_30 += arr_1 [i_0];
                    var_31 += ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                }
                for (long long int i_8 = 1; i_8 < 12; i_8 += 3) /* same iter space */
                {
                    var_32 ^= (!(((/* implicit */_Bool) arr_8 [i_1 - 1] [i_6 - 1] [i_8 + 1] [i_8 - 1])));
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_6 - 1] [i_0])) ? (((/* implicit */int) (unsigned char)214)) : (arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])))) * (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_1)))));
                }
                for (int i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) 941011359U)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-27341))))) : (((var_5) >> (((((/* implicit */int) var_8)) - (28697)))))));
                    var_35 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [(unsigned short)12])) ? (((/* implicit */int) arr_32 [2] [2] [i_1 + 2])) : (((/* implicit */int) arr_34 [i_6 - 1] [i_6] [i_6] [i_6 - 1] [i_6] [6ULL]))))) == (var_2)));
                }
            }
            for (unsigned char i_10 = 1; i_10 < 12; i_10 += 3) 
            {
                var_36 = ((/* implicit */signed char) min(((+(min((7208196561165926341LL), (((/* implicit */long long int) (unsigned char)153)))))), (((/* implicit */long long int) var_10))));
                var_37 = ((/* implicit */unsigned short) var_13);
                var_38 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)0)), ((-(((/* implicit */int) (unsigned char)23))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [i_10 + 1] [8] [i_10 - 1] [i_10 + 1])) : (arr_37 [i_10] [6LL] [6LL] [i_0]))), ((~(((/* implicit */int) (signed char)126))))))) : (max(((-(892051094180389617ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_0] [i_0])))))))));
            }
        }
    }
    var_39 = ((/* implicit */unsigned short) var_0);
}
