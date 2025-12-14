/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96887
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
    var_13 = var_2;
    var_14 = ((/* implicit */unsigned long long int) ((unsigned int) (signed char)15));
    var_15 = ((/* implicit */unsigned char) (-((+(((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) arr_2 [i_1]);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 2) 
            {
                var_17 += ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) : (9ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16023628645885966095ULL)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (signed char)96))))) : (max((((/* implicit */unsigned long long int) (signed char)-62)), (9ULL))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2])))));
                arr_8 [i_0] [i_1] [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) ? (-1784283242746068926LL) : (((/* implicit */long long int) arr_4 [i_1 - 1] [i_0]))))), ((-(min((((/* implicit */unsigned long long int) arr_0 [i_1 - 2])), (274877644800ULL)))))));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 4; i_3 < 22; i_3 += 2) 
                {
                    var_18 += ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0]);
                    var_19 = ((/* implicit */unsigned int) min((var_19), (arr_0 [i_1])));
                }
                for (long long int i_4 = 1; i_4 < 21; i_4 += 4) 
                {
                    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) arr_3 [i_2 - 2] [i_1 - 2])) == (((/* implicit */int) arr_3 [i_2 + 1] [i_1 + 2])))))));
                    var_21 = ((/* implicit */unsigned long long int) (~(arr_10 [i_0] [i_0] [i_2] [i_2] [i_4])));
                    var_22 += ((/* implicit */signed char) ((-4959662057219640753LL) == (((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))) | (arr_10 [i_0] [i_1] [i_2] [i_2] [i_4]))))))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) min(((~(((/* implicit */int) var_5)))), (((((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) << (((((/* implicit */int) (signed char)114)) - (107)))))))))))));
                    var_24 += ((/* implicit */unsigned long long int) ((max((max((((/* implicit */unsigned long long int) arr_11 [i_0])), (var_1))), (((((/* implicit */_Bool) arr_11 [i_4])) ? (((/* implicit */unsigned long long int) arr_0 [i_4])) : (17330979946277959579ULL))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_4 + 1])) ? (((/* implicit */int) arr_5 [i_0] [i_1 + 1] [i_4 + 2])) : (((/* implicit */int) arr_5 [i_0] [i_2 - 2] [i_4])))))));
                }
            }
            var_25 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), ((unsigned char)9))))) : (min((((/* implicit */unsigned int) arr_1 [i_1])), (arr_0 [i_0]))))));
            var_26 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1 - 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)157))) % (1U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (signed char)-44))))))));
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)136)))))) : (((((/* implicit */unsigned long long int) arr_11 [i_0])) & (arr_7 [i_0] [i_0] [i_0]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 - 2] [i_1 + 2]))) <= (min((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_1])), (arr_6 [i_0] [i_1])))))))));
        }
        for (long long int i_5 = 2; i_5 < 20; i_5 += 2) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned char) arr_12 [i_0] [i_0] [i_0] [i_5]);
            arr_16 [i_0] [i_5] = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) 4959662057219640756LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)3))) : (15651816274120495651ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) arr_5 [i_0] [i_5] [i_5]))))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_10 [i_5] [i_0] [i_0] [i_0] [i_0]))) / (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_5]))))))))));
            arr_17 [i_0] [i_0] = ((/* implicit */unsigned char) arr_15 [i_5]);
        }
        for (long long int i_6 = 2; i_6 < 20; i_6 += 2) /* same iter space */
        {
            arr_21 [i_0] [i_6] [i_6] = ((/* implicit */unsigned int) (+(arr_2 [i_6])));
            var_28 = ((/* implicit */unsigned long long int) ((2535714376U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14)))));
        }
        var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? ((+(arr_14 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) (+(arr_11 [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)157)) + (((/* implicit */int) (signed char)-11)))))));
        var_30 = ((/* implicit */long long int) arr_19 [i_0]);
    }
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 2) /* same iter space */
    {
        arr_25 [i_7] [i_7] = ((/* implicit */signed char) min(((~(arr_20 [i_7] [i_7] [i_7]))), (((/* implicit */unsigned long long int) ((arr_20 [i_7] [i_7] [i_7]) > (arr_20 [i_7] [i_7] [i_7]))))));
        var_31 = ((/* implicit */signed char) max(((+(arr_0 [i_7]))), (arr_4 [i_7] [i_7])));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 4) 
        {
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)72)), ((unsigned char)191)))) ? (((/* implicit */long long int) (~(arr_10 [i_7] [i_7] [i_7] [i_8] [i_8])))) : (min((arr_2 [i_7]), (((/* implicit */long long int) var_5))))))) ? ((((!(((/* implicit */_Bool) arr_15 [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_23 [i_7]) != (arr_27 [i_8]))))) : (((((/* implicit */_Bool) 1784283242746068926LL)) ? (0U) : (arr_10 [i_8] [i_8] [i_8 - 1] [i_7] [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((3231167289U), (((/* implicit */unsigned int) arr_12 [i_7] [i_7] [i_7] [i_7])))))))));
            var_33 = ((/* implicit */signed char) arr_22 [i_7]);
            var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)128)))))));
            arr_29 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_8 + 1] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_6 [i_8 + 1] [i_8])))) ? ((-(arr_6 [i_8 + 1] [i_8]))) : ((-(arr_6 [i_8 + 1] [i_8 + 1])))));
            var_35 += ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_0))) && (((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_8])))))));
        }
        var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) arr_3 [i_7] [i_7]))));
    }
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 2) /* same iter space */
    {
        var_37 += ((/* implicit */unsigned char) ((unsigned int) (signed char)47));
        arr_34 [i_9] = ((unsigned long long int) min((arr_20 [i_9] [i_9] [i_9]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_9] [i_9] [i_9] [i_9] [i_9])))))));
        arr_35 [i_9] = ((/* implicit */unsigned char) arr_5 [i_9] [i_9] [i_9]);
    }
    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 2) /* same iter space */
    {
        arr_39 [i_10] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((unsigned char) arr_27 [i_10]))), (((arr_27 [i_10]) | (arr_27 [i_10])))));
        var_38 = ((/* implicit */unsigned char) (~((~(((1286546246796748094LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126)))))))));
        /* LoopSeq 2 */
        for (long long int i_11 = 2; i_11 < 20; i_11 += 4) 
        {
            var_39 = arr_1 [i_10];
            var_40 += ((/* implicit */unsigned int) max((max((arr_15 [i_10]), (arr_15 [i_10]))), (((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_10])) < (((/* implicit */int) arr_15 [i_10])))))));
        }
        for (unsigned int i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            var_41 += ((/* implicit */signed char) ((unsigned int) ((long long int) arr_10 [i_10] [i_10] [i_12] [i_12] [i_12])));
            var_42 = ((/* implicit */long long int) (+(min((max((((/* implicit */unsigned long long int) arr_2 [i_10])), (arr_27 [i_10]))), (((/* implicit */unsigned long long int) (unsigned char)153))))));
            arr_46 [i_10] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_12])) / (((/* implicit */int) arr_38 [i_12]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_20 [i_10] [i_12] [i_12])))))))) : (min((((/* implicit */unsigned long long int) (~(arr_2 [i_12])))), ((~(var_1)))))));
        }
    }
}
