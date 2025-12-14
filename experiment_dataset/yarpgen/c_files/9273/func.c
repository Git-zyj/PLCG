/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9273
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 22; i_0 += 4) 
    {
        arr_4 [i_0 - 2] = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-93))));
        arr_5 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_18 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                    arr_10 [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))) % (17039366881107624281ULL)));
                    arr_11 [i_2] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0]);
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */signed char) (~(arr_6 [i_0] [i_0] [i_0 - 1])));
        var_19 = ((((((/* implicit */_Bool) var_0)) ? (2010649946386348687ULL) : (12529315141062457756ULL))) ^ (((/* implicit */unsigned long long int) 2043099934)));
    }
    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_17 [i_3] [i_3] |= ((/* implicit */int) ((((/* implicit */_Bool) min((arr_8 [i_3] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)22969))) >= (var_9))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)32301))))) : (min((min((23ULL), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (signed char)104)))))))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 15; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 1) 
                {
                    arr_24 [i_5] [i_4] = ((/* implicit */signed char) (unsigned short)2868);
                    var_20 += ((/* implicit */short) max((((17432459752000815180ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 18446744073709551615ULL)))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) var_17))))))));
                }
                /* LoopSeq 1 */
                for (unsigned short i_7 = 3; i_7 < 13; i_7 += 1) 
                {
                    var_21 ^= ((/* implicit */unsigned long long int) (unsigned char)0);
                    var_22 += ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 2554255996664800251LL)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20595))))));
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 12)))))));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (+((-(arr_25 [6ULL] [i_3] [i_7 - 1] [i_7 + 2] [i_3] [i_4 - 1]))))))));
                }
            }
            arr_27 [i_3] [(_Bool)1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)33))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)69))) / (arr_2 [i_3])))))) ? ((~(1250928632489542159LL))) : (((/* implicit */long long int) ((4078893959U) >> (((/* implicit */int) (_Bool)1)))))));
        }
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((17226351215996368592ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-2305843009213693952LL)))))))));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 15; i_9 += 3) 
            {
                {
                    arr_34 [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) (~(1056964608)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_28 [i_3] [i_3] [i_3]))))) : (max((((/* implicit */long long int) var_3)), (var_9))))) / (max((((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (arr_21 [(signed char)8] [i_9] [i_9] [i_9] [(signed char)8] [i_9]))), (((/* implicit */long long int) (((_Bool)1) ? (1567742949) : (((/* implicit */int) var_17)))))))));
                    arr_35 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min(((signed char)-78), ((signed char)0))))) % (((var_4) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_8] [i_9])))))));
                }
            } 
        } 
        arr_36 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [i_3])) ? ((~(arr_3 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-32)))))) ? ((+(((/* implicit */int) ((arr_1 [i_3]) != (((/* implicit */int) (unsigned short)0))))))) : (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_3]))) / (arr_0 [i_3] [i_3]))) > (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))))))));
        arr_37 [7] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4793)) ? (524288U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105)))))))));
    }
    for (int i_10 = 0; i_10 < 14; i_10 += 3) 
    {
        var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) (+((-(((/* implicit */int) var_14)))))))));
        arr_40 [i_10] [i_10] = ((/* implicit */unsigned short) (-((+(min((866387263), (((/* implicit */int) (unsigned short)25963))))))));
    }
    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        arr_44 [i_11] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */unsigned long long int) arr_30 [i_11] [i_11] [(unsigned short)10])) : (arr_2 [i_11])));
        var_27 = ((((/* implicit */long long int) ((((/* implicit */int) arr_39 [5U])) - (((/* implicit */int) arr_39 [i_11]))))) + (min((((/* implicit */long long int) arr_39 [i_11])), (6831076378353450145LL))));
        var_28 = ((/* implicit */unsigned short) arr_19 [i_11]);
        arr_45 [i_11] = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) arr_3 [i_11])) ? (7881178115399799850LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))) > (var_4)));
    }
    var_29 = ((/* implicit */signed char) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-62)), (var_13))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)183))) % (66569919U)))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-2004488592) <= (((/* implicit */int) var_3)))))) > (((((/* implicit */_Bool) 5323197328619375680LL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))));
    var_31 = ((/* implicit */short) min(((-((+(-1897935088))))), ((+((+(((/* implicit */int) var_10))))))));
}
