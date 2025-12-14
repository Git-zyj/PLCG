/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65477
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
    var_20 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(0ULL)))) ? (((/* implicit */int) max(((_Bool)1), ((_Bool)1)))) : ((+(((/* implicit */int) (signed char)88))))))) ? (18446744073709551605ULL) : ((-(((((/* implicit */_Bool) 3340789513U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_0 [i_0])))))))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (1309358806400874979ULL) : (17137385267308676644ULL))), (((/* implicit */unsigned long long int) ((unsigned char) 0LL))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            var_23 += ((/* implicit */signed char) 9223372036854775807LL);
            var_24 = ((/* implicit */unsigned char) (signed char)-110);
        }
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-83))))), (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned short)21436)))) : (6009212409213577151ULL)))));
            var_26 = arr_4 [i_0];
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_27 = ((/* implicit */unsigned int) 17970387442682550469ULL);
            arr_9 [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned char) (((_Bool)0) ? (-6760371887696073849LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))), (0LL)));
        }
        /* LoopNest 3 */
        for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 4) 
                {
                    {
                        var_28 |= arr_16 [i_5] [i_4];
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            var_29 *= ((/* implicit */unsigned int) arr_13 [i_0] [4ULL] [i_6] [i_7]);
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_5]))))) ? (((/* implicit */int) arr_5 [i_7])) : (((/* implicit */int) arr_5 [i_0])))))));
                        }
                        arr_21 [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) 1063462969U))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_5])) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_0 [i_4]))))))))));
                        var_31 = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (signed char)12))))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) (unsigned char)208))))), (3914454717U)));
                    }
                } 
            } 
        } 
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((long long int) 6869122255918076123ULL)))));
    }
    for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
    {
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_22 [i_8]))) ? (((((/* implicit */_Bool) 3434567789U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_8]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1))))))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        var_34 += ((((/* implicit */_Bool) ((unsigned char) (unsigned short)0))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65535))))) : (((unsigned long long int) arr_23 [i_8])));
                        var_35 |= (!(((/* implicit */_Bool) 25LL)));
                    }
                    arr_32 [i_8] [i_8] [i_10] = ((/* implicit */signed char) ((unsigned int) 12465009653866048838ULL));
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_8] [i_8] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)238))) : (((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (max((arr_22 [i_9]), (((/* implicit */unsigned int) (unsigned char)49))))))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_12 = 1; i_12 < 11; i_12 += 1) /* same iter space */
        {
            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-14LL)))) ? (((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)245))) : (arr_30 [i_12]))) : (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */unsigned long long int) 3434567793U)) : (9176012409895409332ULL)))));
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [(_Bool)1] [i_12] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44))) : (arr_34 [i_8] [i_12 - 1] [i_12 + 2])));
        }
        for (unsigned char i_13 = 1; i_13 < 11; i_13 += 1) /* same iter space */
        {
            arr_39 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_13 - 1] [i_13 - 1] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_37 [i_13])))) : (2069921205U)));
            var_39 = 2721542771U;
        }
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 3) 
    {
        var_40 = (+(arr_26 [i_14] [i_14]));
        var_41 = (_Bool)1;
        var_42 = ((/* implicit */_Bool) max((var_42), ((!(((/* implicit */_Bool) arr_25 [i_14] [i_14] [i_14]))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 3) 
    {
        for (signed char i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            {
                var_43 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_45 [i_16] [i_15])) ? (((/* implicit */int) arr_45 [i_15] [i_16])) : (((/* implicit */int) (unsigned short)14382)))), (((/* implicit */int) ((unsigned short) arr_45 [i_16] [i_16])))));
                var_44 += arr_44 [i_15];
                var_45 = ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) 16322808297434820785ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U)))))));
            }
        } 
    } 
    var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) (unsigned char)255))));
}
