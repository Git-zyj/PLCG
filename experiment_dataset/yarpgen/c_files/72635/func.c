/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72635
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_11 += ((/* implicit */long long int) (unsigned char)233);
        var_12 ^= ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1]))), ((-(((/* implicit */int) arr_0 [i_0 + 2]))))));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1 - 1]))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) (_Bool)1)))))));
        var_13 = arr_1 [i_1];
        var_14 = (-(((/* implicit */int) var_10)));
    }
    /* LoopSeq 2 */
    for (short i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_3 = 3; i_3 < 13; i_3 += 1) /* same iter space */
        {
            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((9249546916408583161ULL) / (((/* implicit */unsigned long long int) arr_9 [i_2])))) / (((/* implicit */unsigned long long int) ((arr_9 [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-12)))))))))));
            var_16 = ((/* implicit */unsigned int) (((((~(9197197157300968476ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [i_2] [i_3 - 1]))))))) == ((+(max((((/* implicit */unsigned long long int) arr_11 [i_3] [i_3])), (9197197157300968459ULL)))))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) * (max((max((((/* implicit */unsigned long long int) var_9)), (9249546916408583163ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_12 [i_2] [i_2])), (var_0))))))));
        }
        /* vectorizable */
        for (int i_4 = 3; i_4 < 13; i_4 += 1) /* same iter space */
        {
            arr_16 [i_2] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-6))));
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_6 [i_2])) ? (9249546916408583138ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [6ULL] [(unsigned short)0])))))))));
            arr_17 [i_4] [i_4] = ((/* implicit */_Bool) arr_10 [i_4 - 1] [i_2] [i_2]);
            arr_18 [i_2] [12ULL] [i_2] &= ((/* implicit */int) ((arr_9 [i_4 + 2]) * (arr_9 [i_4 + 1])));
        }
        for (int i_5 = 3; i_5 < 13; i_5 += 1) /* same iter space */
        {
            var_19 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_6 [i_5]))))) / (17750541677613950911ULL));
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9197197157300968429ULL)) ? (9249546916408583163ULL) : (9197197157300968428ULL)))) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 9249546916408583138ULL)))) ? ((-(((/* implicit */int) var_10)))) : (max((var_7), (((/* implicit */int) (signed char)4))))))) : (((((/* implicit */_Bool) arr_9 [i_5])) ? (9197197157300968429ULL) : (((/* implicit */unsigned long long int) 102904617U))))));
            var_21 = ((/* implicit */int) max((var_21), (((((((/* implicit */_Bool) 3277505812456392793LL)) ? (((/* implicit */int) var_10)) : ((+(((/* implicit */int) (unsigned short)32510)))))) << (((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2])) || (arr_8 [i_5])))), (((((/* implicit */_Bool) 9249546916408583161ULL)) ? (var_8) : (9249546916408583183ULL))))) - (9143882860590095339ULL)))))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_5 + 2] [i_5 + 2] [9U]))))) && ((!(((/* implicit */_Bool) min((var_5), ((short)-26896))))))));
        }
        arr_22 [i_2] [i_2] = ((/* implicit */_Bool) ((unsigned int) (~(((/* implicit */int) var_2)))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) (((~(((/* implicit */int) arr_14 [i_2] [i_2])))) >> (min((arr_7 [i_2]), (((/* implicit */unsigned int) (signed char)4))))))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) arr_10 [i_2] [i_2] [i_2])) | (((/* implicit */int) var_10)))))));
                var_25 = ((/* implicit */signed char) ((int) 4294967295U));
                arr_28 [i_2] [i_6 - 2] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) ((signed char) 102904601U))) < (arr_21 [i_6 - 1]))));
            }
            arr_29 [i_2] [i_2] [i_2] = ((/* implicit */int) min(((unsigned short)32510), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (-4317359261652249526LL)))))))));
        }
        /* vectorizable */
        for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
        {
            arr_33 [i_2] [i_8 + 1] = ((((/* implicit */int) ((9197197157300968477ULL) <= (((/* implicit */unsigned long long int) 357222350))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-93))))));
            /* LoopSeq 3 */
            for (int i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_15 [i_8 + 2] [i_8 + 1] [i_8])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_2])) != (9197197157300968455ULL))))));
                /* LoopSeq 1 */
                for (unsigned short i_10 = 0; i_10 < 15; i_10 += 1) 
                {
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_30 [i_8 - 1] [i_8 + 2] [i_8 - 1])) ? (arr_30 [i_8 - 1] [i_8 + 2] [i_8 - 1]) : (((/* implicit */int) var_10)))))));
                    var_28 = ((((/* implicit */_Bool) arr_25 [i_8 + 1] [i_8 + 1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [(_Bool)1] [10LL] [i_2])))))) : (var_8));
                    /* LoopSeq 2 */
                    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
                        var_30 *= ((/* implicit */_Bool) (signed char)12);
                    }
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (+(((/* implicit */int) var_10)))))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_0) : (1430409584)))) ? (((((/* implicit */_Bool) -1881295929)) ? (var_0) : (-357222351))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned short)504)) : (var_7))))))));
                        var_33 = ((/* implicit */unsigned short) ((short) var_8));
                        var_34 = ((/* implicit */_Bool) (unsigned short)504);
                    }
                }
                arr_44 [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)0));
                var_35 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 9249546916408583109ULL)))) | ((-(arr_25 [i_2] [i_8 - 1] [i_9])))));
                arr_45 [i_2] [i_8 + 2] = ((/* implicit */unsigned long long int) var_2);
            }
            for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                var_36 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) && ((_Bool)1))));
                var_37 *= ((/* implicit */short) arr_48 [i_2] [i_8]);
                var_38 = var_5;
                arr_50 [i_13] [i_8] [i_8] = ((/* implicit */signed char) ((11764400363155328527ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_8 - 1] [(_Bool)1])))));
            }
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_55 [i_2] [i_8 - 1] [i_14] = ((/* implicit */short) arr_48 [i_2] [i_14]);
                var_39 = ((/* implicit */unsigned long long int) min((var_39), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_13 [i_14])))) * ((-(((/* implicit */int) (unsigned short)504)))))))));
                arr_56 [(unsigned short)2] [i_8] [i_2] = ((/* implicit */short) (~((~(3721453137631157334ULL)))));
            }
            var_40 &= ((/* implicit */int) ((arr_9 [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
            var_41 = ((((((/* implicit */int) (signed char)-12)) + (2147483647))) >> (((/* implicit */int) (_Bool)1)));
        }
    }
    for (int i_15 = 0; i_15 < 20; i_15 += 1) 
    {
        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) arr_59 [i_15]))));
        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) ((((arr_57 [i_15] [i_15]) | (arr_57 [i_15] [i_15]))) | (((/* implicit */int) ((_Bool) 2095034062))))))));
        var_44 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((((/* implicit */long long int) 223989107)) / (4747692670254467542LL))), (((/* implicit */long long int) min((arr_59 [i_15]), (((/* implicit */int) var_10)))))))), (((((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (4095ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (arr_59 [i_15]))))))));
        var_45 ^= ((/* implicit */unsigned long long int) ((((arr_57 [i_15] [i_15]) >= (((/* implicit */int) var_10)))) || ((!(((/* implicit */_Bool) arr_59 [i_15]))))));
    }
}
