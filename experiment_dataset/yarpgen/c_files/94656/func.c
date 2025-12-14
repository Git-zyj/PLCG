/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94656
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
    /* vectorizable */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) (+(var_6)));
        var_12 &= ((/* implicit */int) (+(((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        var_13 = ((/* implicit */unsigned int) ((9899802332865063285ULL) >= (9899802332865063302ULL)));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((8546941740844488326ULL) << (((-945169129) + (945169137)))));
        var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-19746))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) (short)19863)) : (1242135212))) << (((((((/* implicit */_Bool) (unsigned short)16835)) ? (((/* implicit */int) (unsigned short)16833)) : (((/* implicit */int) (short)-32764)))) - (16818)))));
            /* LoopSeq 1 */
            for (int i_3 = 2; i_3 < 18; i_3 += 4) 
            {
                arr_14 [i_2] = ((/* implicit */long long int) (((~(((/* implicit */int) var_9)))) & (var_0)));
                var_16 = ((/* implicit */short) ((16) * (((/* implicit */int) (unsigned short)16820))));
                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (10637762501432992454ULL) : (((/* implicit */unsigned long long int) var_4)))) < (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-24923)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))))));
            }
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                var_18 = ((/* implicit */long long int) (+((((_Bool)1) ? (var_4) : (((/* implicit */unsigned int) -246523636))))));
                arr_19 [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!((_Bool)1))))));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))));
            }
            for (short i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                /* LoopSeq 3 */
                for (long long int i_6 = 1; i_6 < 20; i_6 += 4) 
                {
                    var_20 = ((/* implicit */_Bool) ((((255296294U) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) >> (((((/* implicit */int) (short)-32753)) + (32778)))));
                    arr_26 [i_5] [i_2] [i_5] [i_6] = ((/* implicit */_Bool) (-(4897935827256840609LL)));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        var_21 += (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-5102)));
                        arr_29 [i_2] [3U] = ((/* implicit */short) (signed char)71);
                    }
                    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        var_22 = ((/* implicit */signed char) ((1909626817) > (((/* implicit */int) (_Bool)1))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)24)) ? (3525804090859130729ULL) : (6947924509465416001ULL)));
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)91))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))) : (((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_2] = ((/* implicit */signed char) 10914610020647009408ULL);
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */unsigned long long int) -1801249163)))))));
                        arr_36 [i_1] [i_2] [i_5] [13] [13ULL] = ((((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (short)-24917)) : (((/* implicit */int) (short)24919)))) > (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 2147483644))))));
                        arr_37 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (425740070U)))));
                    }
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 21; i_11 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)24924)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
                        var_27 = ((/* implicit */_Bool) 2865929121U);
                        arr_44 [(_Bool)1] [(_Bool)1] [i_5] [i_2] [i_11] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) || ((!(var_7)))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 1) 
                    {
                        var_28 |= ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-36)))))));
                        arr_47 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)115)) ? (1801249180) : (((/* implicit */int) (_Bool)1))))) != ((-(378086254U)))));
                        var_29 += ((/* implicit */_Bool) ((4055498386411909733ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        arr_48 [i_12] [i_2] [i_2] [i_1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 3132262625U)))) ? (((((/* implicit */int) var_1)) & (((/* implicit */int) (unsigned char)71)))) : ((-(((/* implicit */int) (signed char)(-127 - 1)))))));
                    }
                    arr_49 [i_2] [i_5] [4] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_3))));
                    var_30 &= ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2012142556U))) << (((((/* implicit */int) (signed char)1)) | (((/* implicit */int) (_Bool)0))))));
                    arr_50 [i_1] [4U] [4U] [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_10))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    var_31 = ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) == ((~(((/* implicit */int) (_Bool)1))))));
                    arr_54 [i_1] [i_2] [i_2] [i_2] [(_Bool)1] &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-109)));
                }
                arr_55 [i_1] [i_1] [i_2] [i_5] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (_Bool)1))))));
            }
        }
    }
    var_32 &= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) var_3)) >= (var_0)))), (((((/* implicit */int) var_2)) ^ ((-(((/* implicit */int) (signed char)119))))))));
}
