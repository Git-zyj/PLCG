/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95958
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
    var_16 = ((/* implicit */unsigned short) 9356344838524563241ULL);
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_0)), (3143380828U)))) : (min((((/* implicit */long long int) var_3)), (var_7)))))) ? (min((((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_12)) : (var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) >> (((var_13) - (4902173949177414207ULL)))))));
    var_18 = ((/* implicit */unsigned int) (_Bool)1);
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_0 [i_0 + 1])), (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (short)-18622))))) ? (((/* implicit */int) min((var_6), (((/* implicit */short) (_Bool)1))))) : (((var_1) | (((/* implicit */int) arr_1 [i_0]))))))));
        var_20 = ((/* implicit */unsigned int) ((long long int) ((int) ((((/* implicit */_Bool) 738231438361473752ULL)) ? (17708512635348077873ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)28)))))));
        var_21 |= min((((((/* implicit */_Bool) 17708512635348077873ULL)) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (17708512635348077849ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)218))))), (var_11));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                var_22 = (!(((/* implicit */_Bool) var_11)));
                arr_9 [i_2] [i_0] [i_0 + 1] = ((/* implicit */signed char) var_0);
                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1]))));
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [(_Bool)1] [i_2]))) : (var_7))))));
                var_25 = ((/* implicit */short) (+(var_7)));
            }
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_26 += ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) == ((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (((/* implicit */int) arr_12 [i_4] [18] [i_4] [i_4])) : (((/* implicit */int) var_0))))) : (max((var_7), (((/* implicit */long long int) var_5))))))));
                        var_27 = ((/* implicit */unsigned char) (~(max((9908267819680407762ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)-8)))))))));
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((var_13) << (((var_11) - (3762723668219087927ULL)))))) || (((/* implicit */_Bool) max((17708512635348077872ULL), (((/* implicit */unsigned long long int) arr_0 [i_3])))))))))))));
                    }
                } 
            } 
            arr_16 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */int) var_6))))) ? (((13874059148908775474ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))));
            arr_17 [i_0 + 2] [12] |= ((/* implicit */signed char) min(((unsigned char)252), ((unsigned char)252)));
        }
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_2 [i_0] [i_5]), (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (var_11)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_15)))) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_11 [i_0 + 3] [i_0] [i_5] [i_5])))) : (((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))))) : (((((/* implicit */unsigned int) arr_2 [i_0] [i_0 - 1])) | (max((((/* implicit */unsigned int) arr_13 [i_0])), (var_12)))))));
            var_30 = ((/* implicit */unsigned char) ((_Bool) arr_7 [i_0] [i_0 + 4] [i_0] [i_0]));
        }
        /* vectorizable */
        for (unsigned char i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16633)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) var_2))))) ? (arr_8 [i_6 + 3] [i_0]) : (var_13)));
            var_32 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(short)0])) ? (((/* implicit */int) arr_15 [i_0 + 4] [i_6] [i_6 + 2] [i_6 + 1])) : (((/* implicit */int) var_5))));
            arr_24 [i_0 + 2] [i_0] = ((/* implicit */int) var_12);
        }
    }
    for (int i_7 = 1; i_7 < 21; i_7 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_7 + 3])) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)255)), (-65997807)))) : (min((17708512635348077849ULL), (var_13))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (0ULL)));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                for (unsigned short i_10 = 1; i_10 < 22; i_10 += 1) 
                {
                    {
                        var_35 = ((/* implicit */unsigned char) (~(arr_31 [i_10 - 1] [i_9] [i_8])));
                        arr_37 [(unsigned short)14] [i_8] [i_9] [i_9] |= ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_7 + 2] [i_7 + 4] [i_7 + 2] [i_7 + 4]))) + ((~(arr_8 [i_8] [i_8]))));
                        arr_38 [i_10] [i_9] [i_8] [i_10] = (~(((/* implicit */int) var_15)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_45 [i_7] [i_8] [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_1)))) | (((((/* implicit */_Bool) arr_29 [i_11])) ? (arr_14 [i_11]) : (((/* implicit */unsigned long long int) var_7))))));
                        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_23 [i_12])) : (((/* implicit */int) arr_11 [i_7 + 3] [i_11] [i_7 + 2] [i_7]))))) ? (((/* implicit */int) ((unsigned char) var_13))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0))))));
                    }
                } 
            } 
        }
        var_37 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (2987540146107574271ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) var_0)))))));
    }
    /* vectorizable */
    for (int i_13 = 1; i_13 < 21; i_13 += 1) /* same iter space */
    {
        var_38 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [(unsigned char)24] [i_13 + 1] [i_13])) ? (var_1) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [(unsigned char)12]))))) : (((/* implicit */int) var_3)));
        var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6200216995979938757LL)) ? (((/* implicit */unsigned long long int) var_1)) : (var_13)));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 14; i_14 += 1) 
    {
        var_40 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */int) (unsigned char)9)) - (((/* implicit */int) var_10)))));
        arr_53 [i_14] [i_14] = ((/* implicit */unsigned int) arr_31 [i_14] [i_14] [i_14]);
    }
    var_41 = max((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)54))))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))), (((/* implicit */int) (short)-29015)));
}
