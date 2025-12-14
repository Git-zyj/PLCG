/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98480
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51))) % (8725724278030336ULL))));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0 - 4]))))) == ((+(-1573785086618120015LL))))))));
        arr_3 [9LL] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) ^ (15350120133529331738ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)106)))) : (7945367496373901183ULL)));
        arr_4 [i_0 + 1] = ((/* implicit */signed char) ((long long int) ((50510246622646828ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        arr_17 [(unsigned char)2] [i_2] [i_1] [i_4] [i_1] [i_1] = ((/* implicit */signed char) (short)-30998);
                        var_19 = ((/* implicit */int) min((((((/* implicit */_Bool) 1375151191437497292LL)) ? (3501201304668842250LL) : (min((5486184173630080219LL), (((/* implicit */long long int) (unsigned char)15)))))), (((/* implicit */long long int) (+(max((1581139352U), (((/* implicit */unsigned int) (short)-26362)))))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (10655250389898977758ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1])))))) ? (((/* implicit */int) (short)-30998)) : (((/* implicit */int) ((unsigned short) (unsigned short)65535)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -584456422276282348LL)) ? (18396233827086904788ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_1])))))) ? (max((9559051139581099118ULL), (((/* implicit */unsigned long long int) (unsigned short)57189)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1] [(signed char)13] [15ULL] [i_1] [i_1] [i_1]))) ^ (arr_11 [i_1] [i_1] [i_1]))))))));
    }
    for (long long int i_5 = 3; i_5 < 9; i_5 += 2) 
    {
        arr_21 [i_5] [i_5] |= min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [(unsigned char)10])) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) (unsigned char)0))))), (2218848386070301672LL)))), (((max((((/* implicit */unsigned long long int) -9000040119422429386LL)), (140737488355327ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9194563071574773381LL)) ? (((/* implicit */int) arr_19 [i_5])) : (((/* implicit */int) (signed char)18))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 7791493683810573858ULL))) ? (((((/* implicit */_Bool) 8887692934128452497ULL)) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) arr_8 [i_6])))) : (((/* implicit */int) ((((/* implicit */int) (short)-30998)) < (((/* implicit */int) (unsigned short)8347)))))));
            /* LoopSeq 2 */
            for (unsigned char i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                arr_26 [10ULL] [10ULL] = ((/* implicit */short) 18446744073709551615ULL);
                /* LoopSeq 1 */
                for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_8])) ? (((((/* implicit */_Bool) 4194303ULL)) ? (8579638689574992914LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_7]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 9559051139581099118ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-71))) : (262143U))))));
                    arr_29 [(unsigned char)1] [i_6] [(unsigned char)1] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) 8579638689574992914LL)))));
                    arr_30 [i_5] [i_5] [0LL] [i_5 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)225)) ? (arr_25 [i_6] [10LL] [i_6] [(short)2]) : (((/* implicit */unsigned long long int) arr_11 [i_8] [i_7 - 1] [i_5]))))) && (((/* implicit */_Bool) 6724536002402775724ULL))));
                }
            }
            for (unsigned long long int i_9 = 4; i_9 < 9; i_9 += 2) 
            {
                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_6])) && (((/* implicit */_Bool) arr_19 [i_6]))))))))));
                var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17319427802457019968ULL)) ? (9000040119422429385LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-71)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_18 [i_5] [i_5])) ^ (arr_11 [i_5] [i_5] [0U])))) : ((+(17319427802457019968ULL)))));
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_5])) ? (((/* implicit */int) arr_6 [i_6] [i_6])) : (((/* implicit */int) arr_10 [i_5 + 1]))))) / (((((/* implicit */_Bool) 6789911515818863737ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))) : (8191U))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 3) 
    {
        for (unsigned long long int i_11 = 1; i_11 < 11; i_11 += 1) 
        {
            {
                arr_42 [i_10] = ((/* implicit */signed char) (short)-2463);
                var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((short) -8579638689574992914LL)))));
            }
        } 
    } 
}
