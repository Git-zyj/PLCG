/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6657
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) (signed char)-62)) ^ (((/* implicit */int) (unsigned char)104)))) : ((~(((/* implicit */int) var_10))))))) ? (((((/* implicit */int) var_8)) / (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) (unsigned char)94))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_10)), ((unsigned char)104)))) : ((~(1372556158)))))));
    var_18 *= ((/* implicit */unsigned short) (unsigned char)253);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [(unsigned char)0] [(unsigned char)0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) 1372556133))) ? (((/* implicit */unsigned long long int) (~(1372556161)))) : (((unsigned long long int) -2215176517468428222LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1372556161)) ? (arr_1 [i_0]) : (var_16))))))) : (-1372556156)));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)162)))) && (((/* implicit */_Bool) max((arr_4 [i_0] [i_1]), (((/* implicit */long long int) arr_5 [i_1])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                var_19 = ((int) arr_7 [i_0] [i_1] [i_2]);
                var_20 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1372556161))));
                var_21 = ((/* implicit */unsigned short) (-(arr_5 [i_0])));
            }
            for (short i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) min((max((-1766346304), (((/* implicit */int) ((unsigned short) arr_1 [i_1]))))), (((/* implicit */int) ((signed char) arr_9 [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 + 4]))))))));
                arr_12 [i_1] = ((/* implicit */signed char) var_6);
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (((~(-1372556151))) / ((~(-1372556158)))))) | (min((((/* implicit */unsigned long long int) 1372556144)), (arr_7 [i_3] [i_0] [i_0])))));
                arr_13 [i_1] = ((/* implicit */int) arr_2 [(signed char)3]);
            }
            for (int i_4 = 1; i_4 < 15; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 3; i_5 < 15; i_5 += 1) 
                {
                    for (int i_6 = 1; i_6 < 16; i_6 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1372556161))));
                            var_25 = max((min((((-5917288443216123923LL) / (((/* implicit */long long int) -1372556155)))), (((/* implicit */long long int) -1372556151)))), (((/* implicit */long long int) arr_15 [i_4 + 1] [i_4 + 2] [i_1])));
                            var_26 = ((/* implicit */_Bool) max((var_26), (var_10)));
                            arr_21 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)16)));
                        }
                    } 
                } 
                arr_22 [(_Bool)1] [i_1] [i_0] = ((/* implicit */signed char) 10824541);
            }
        }
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) (~((~((~(arr_9 [i_0] [i_7] [i_7] [i_7])))))));
            var_28 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) 1372556161)) && (((/* implicit */_Bool) (short)25949))))));
        }
        arr_26 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((1372556182) & (((/* implicit */int) (signed char)54)))) * (((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])) == (((/* implicit */int) (signed char)105)))))))) ? (((((/* implicit */_Bool) ((short) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (1372556164) : (-1529392767))) : (((/* implicit */int) arr_17 [8LL] [8LL] [i_0] [i_0] [(short)7] [i_0]))));
        arr_27 [i_0] [i_0] = ((((/* implicit */_Bool) 5917288443216123928LL)) ? (1759710366) : (((/* implicit */int) (unsigned short)54022)));
        /* LoopNest 3 */
        for (unsigned char i_8 = 4; i_8 < 13; i_8 += 2) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                for (unsigned char i_10 = 3; i_10 < 16; i_10 += 3) 
                {
                    {
                        arr_34 [i_0] [(_Bool)1] [i_9] [i_10] = ((/* implicit */signed char) (~(max((arr_16 [i_8 + 2] [i_8 + 2] [i_10 - 3] [i_10] [(unsigned short)9]), (((((((/* implicit */int) var_8)) + (2147483647))) << (((((arr_33 [6] [i_9]) + (1833822134))) - (18)))))))));
                        arr_35 [i_0] [i_8] [(unsigned short)5] [i_0] [i_8] [i_8] = ((/* implicit */unsigned char) var_9);
                        arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (-((+(arr_33 [i_8 + 2] [i_8])))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_11 = 1; i_11 < 15; i_11 += 3) 
                        {
                            var_29 = ((/* implicit */short) ((((/* implicit */int) ((short) min((((/* implicit */unsigned int) (short)-27517)), (arr_2 [i_11 - 1]))))) ^ (((/* implicit */int) min(((!(((/* implicit */_Bool) 1372556162)))), (arr_32 [i_8] [i_8] [i_8] [i_8] [i_8]))))));
                            arr_39 [i_11] = ((/* implicit */short) max(((!(arr_10 [i_11] [i_8 - 1] [i_11]))), (arr_10 [i_11] [i_8 - 3] [i_11])));
                        }
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (signed char i_12 = 2; i_12 < 13; i_12 += 2) 
    {
        for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 2) 
        {
            for (long long int i_14 = 0; i_14 < 15; i_14 += 2) 
            {
                {
                    arr_50 [i_13] [i_13] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)54164)) ? (arr_16 [i_12] [i_13] [i_13] [(short)14] [i_13 + 3]) : (((/* implicit */int) arr_24 [i_12 + 1] [i_12 + 1] [i_12 + 1]))))));
                    arr_51 [i_12] [i_13] [i_13] [i_12] = ((/* implicit */_Bool) -2126035614);
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -10824541)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (2551837605132765580LL)))));
                        arr_56 [i_12] [i_15] [i_12 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (arr_5 [i_15]) : (((/* implicit */int) ((signed char) var_12)))))) && (((/* implicit */_Bool) ((1759710380) >> (((/* implicit */int) (_Bool)1)))))));
                        var_31 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_12 - 2] [i_12 - 2])))) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) var_12))));
                        arr_57 [i_14] [i_15] [i_14] [i_15] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 88806385954242520LL)) ? (((/* implicit */int) max(((unsigned char)104), (((/* implicit */unsigned char) ((6156267061289890705LL) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) : ((~(((/* implicit */int) (!(var_12))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */int) max((var_32), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
                        var_33 = ((/* implicit */int) arr_43 [i_12 + 1] [i_13]);
                    }
                    var_34 = ((/* implicit */int) max((var_34), (max((((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_12] [i_12 - 2])) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) var_10)))) == (((/* implicit */int) max((((/* implicit */unsigned char) arr_53 [i_12] [i_13] [i_13] [i_13] [i_12])), (var_2))))))), (var_13)))));
                }
            } 
        } 
    } 
}
